#include "valvedesigncalculator.h"
#include "ui_valvedesigncalculator.h"

ValveDesignCalculator::ValveDesignCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ValveDesignCalculator)
{
    ui->setupUi(this);

    ui->graphicsView->setScene(plot.getScene());

    buildModelParameters();
    buildCircuitParameters();
    buildStdDeviceSelection();

    circuits.append(new TriodeCommonCathode());
}

ValveDesignCalculator::~ValveDesignCalculator()
{
    delete ui;
}

void ValveDesignCalculator::buildModelParameters()
{
    parameterLabels[0] = ui->par1Label;
    parameterLabels[1] = ui->par2Label;
    parameterLabels[2] = ui->par3Label;
    parameterLabels[3] = ui->par4Label;
    parameterLabels[4] = ui->par5Label;
    parameterLabels[5] = ui->par6Label;
    parameterLabels[6] = ui->par7Label;

    parameterValues[0] = ui->par1Value;
    parameterValues[1] = ui->par2Value;
    parameterValues[2] = ui->par3Value;
    parameterValues[3] = ui->par4Value;
    parameterValues[4] = ui->par5Value;
    parameterValues[5] = ui->par6Value;
    parameterValues[6] = ui->par7Value;

    for (int i=0; i < 7; i++) { // Parameters all initially hidden
        parameterValues[i]->setVisible(false);
        parameterLabels[i]->setVisible(false);
    }
}

void ValveDesignCalculator::setCustomModelEnabled(bool state)
{
    for (int i = 0; i < 7; i++) {
        parameterValues[i]->setEnabled(state);
    }
}

void ValveDesignCalculator::buildStdDeviceSelection()
{
    ui->stdDeviceSelection->addItem("Select...", -1);
    QString modelPath = tr("../models");
    QDir modelDir(modelPath);

    QStringList filters;
    filters << "*.json";
    modelDir.setNameFilters(filters);

    QStringList models = modelDir.entryList();

    for (int i = 0; i < models.size(); i++) {
        QString modelFileName = modelPath + "/" + models.at(i);
        QFile modelFile(modelFileName);
        if (!modelFile.open(QIODevice::ReadOnly)) {
            qWarning("Couldn't open model file: ", modelFile.fileName().toStdString().c_str());
        }
        else {
            QByteArray modelData = modelFile.readAll();
            QJsonDocument modelDoc(QJsonDocument::fromJson(modelData));

            Device* model = new Device(modelDoc);
            this->devices.append(model);
            ui->stdDeviceSelection->addItem(model->getName(), i);
        }
    }
}

void ValveDesignCalculator::buildCircuitParameters()
{
    circuitLabels[0] = ui->cir1Label;
    circuitLabels[1] = ui->cir2Label;
    circuitLabels[2] = ui->cir3Label;
    circuitLabels[3] = ui->cir4Label;
    circuitLabels[4] = ui->cir5Label;
    circuitLabels[5] = ui->cir6Label;
    circuitLabels[6] = ui->cir7Label;

    circuitValues[0] = ui->cir1Value;
    circuitValues[1] = ui->cir2Value;
    circuitValues[2] = ui->cir3Value;
    circuitValues[3] = ui->cir4Value;
    circuitValues[4] = ui->cir5Value;
    circuitValues[5] = ui->cir6Value;
    circuitValues[6] = ui->cir7Value;

    for (int i=0; i < 7; i++) { // Parameters all initially hidden
        circuitValues[i]->setVisible(false);
        circuitLabels[i]->setVisible(false);
    }
}

void ValveDesignCalculator::buildCircuitSelection()
{
    ui->circuitSelection->clear();

    if (currentDevice != nullptr) {
        if (currentDevice->getDeviceType() == MODEL_TRIODE) {
            ui->circuitSelection->addItem("Common Cathode", TRIODE_COMMON_CATHODE);
        } else if (currentDevice->getDeviceType() == MODEL_PENTODE) {
            ui->circuitSelection->addItem("Common Cathode", PENTODE_COMMON_CATHODE);
        }
    }
}

void ValveDesignCalculator::buildPlotSelection()
{
    ui->plotSelection->clear();

    if (currentDevice != nullptr) {
        if (currentDevice->getDeviceType() == MODEL_TRIODE) {
            ui->plotSelection->addItem("Anode Characteristics", PLOT_TRIODE_ANODE);
            ui->plotSelection->addItem("Transfer Characteristics", PLOT_TRIODE_TRANSFER);
        } else if (currentDevice->getDeviceType() == MODEL_PENTODE) {
            ui->plotSelection->addItem("Anode Characteristics", PLOT_PENTODE_ANODE);
            ui->plotSelection->addItem("Transfer Characteristics", PLOT_PENTODE_TRANSFER);
            ui->plotSelection->addItem("Screen Characteristics", PLOT_PENTODE_SCREEN);
        }
    }
}

void ValveDesignCalculator::selectStdDevice(int device)
{
    if (device < 0) {
        currentDevice = customDevice;
        setCustomModelEnabled(true);
    }
    else {
        if (device < devices.size()) {
            currentDevice = devices.at(device);
            setCustomModelEnabled(false);
            currentDevice->anodeAxes(&plot);
            modelPlot = nullptr;
            currentDevice->updateModelSelect(ui->stdModelSelection);
            buildCircuitSelection();
            selectCircuit(ui->circuitSelection->currentData().toInt());
        }
    }
}

void ValveDesignCalculator::selectStdModel(int model)
{
    currentDevice->selectModel(model);
    currentDevice->updateUI(parameterLabels, parameterValues);
    plotModel();
}

void ValveDesignCalculator::selectModel(int modelType)
{
    customDevice->setModelType(modelType);
    customDevice->updateUI(parameterLabels, parameterValues);
}

void ValveDesignCalculator::selectCircuit(int circuitType)
{
    Circuit *circuit = circuits.at(circuitType);
    if (circuitType < circuits.size()) {
        circuit->updateUI(circuitLabels, circuitValues);
        circuit->plot(&plot, currentDevice);
        circuit->updateUI(circuitLabels, circuitValues);
    }
}

void ValveDesignCalculator::selectPlot(int plotType)
{
    plotModel();
}

void ValveDesignCalculator::plotModel()
{
    if (modelPlot) {
       plot.getScene()->removeItem(modelPlot);
    }

    if (currentDevice != nullptr) {
        modelPlot = currentDevice->anodePlot(&plot);
    }
}

double ValveDesignCalculator::checkDoubleValue(QLineEdit *input, double oldValue)
{
    float parsedValue;

    const char *value = _strdup(input->text().toStdString().c_str());

    int n = sscanf_s(value, "%f.3", &parsedValue, strlen(value));

    if (n < 1) {
        return oldValue;
    }

    if (parsedValue < 0) {
        return 0.0;
    }

    return parsedValue;
}

void ValveDesignCalculator::updateDoubleValue(QLineEdit *input, double value)
{
    char number[32];

    sprintf(number, "%.3f", value);

    int length = strlen(number);
    for (int i=length-1;i >= 0; i--) {
        char test = number[i];
        if (test == '0' || test == '.') {
            number[i] = 0;
        }

        if (test != '0') {
            break;
        }
    }

    input->setText(number);
}

void ValveDesignCalculator::updateCircuitParameter(int index)
{
    Circuit *circuit = circuits.at(ui->circuitSelection->currentData().toInt());
    double value = checkDoubleValue(circuitValues[index], circuit->getParameter(index));

    updateDoubleValue(circuitValues[index], value);
    circuit->setParameter(index, value);
    circuit->updateUI(circuitLabels, circuitValues);
    circuit->plot(&plot, currentDevice);
    circuit->updateUI(circuitLabels, circuitValues);
}

void ValveDesignCalculator::on_actionExit_triggered()
{
    QCoreApplication::quit();
}


void ValveDesignCalculator::on_actionPrint_triggered()
{

}


void ValveDesignCalculator::on_actionLoad_Model_triggered()
{
    QString modelName = QFileDialog::getOpenFileName(this, "Open model", "", "*.mdl");

    if (modelName.isNull()) {
        return;
    }

    QFile modelFile(modelName);

    if (!modelFile.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open config file.");
    } else {
        QByteArray modelData = modelFile.readAll();
        currentDevice = new Device(QJsonDocument::fromJson(modelData));
    }
}


void ValveDesignCalculator::on_actionLoad_Measurement_triggered()
{

}

void ValveDesignCalculator::on_stdDeviceSelection_currentIndexChanged(int index)
{
    selectStdDevice(ui->stdDeviceSelection->currentData().toInt());
}

void ValveDesignCalculator::on_stdModelSelection_currentIndexChanged(int index)
{
    selectStdModel(ui->stdModelSelection->currentIndex());
}

void ValveDesignCalculator::on_circuitSelection_currentIndexChanged(int index)
{
    selectCircuit(ui->circuitSelection->currentData().toInt());
}


void ValveDesignCalculator::on_plotSelection_currentIndexChanged(int index)
{
    selectPlot(ui->plotSelection->currentData().toInt());
}


void ValveDesignCalculator::on_cir1Value_editingFinished()
{
    updateCircuitParameter(0);
}


void ValveDesignCalculator::on_cir2Value_editingFinished()
{
    updateCircuitParameter(1);
}


void ValveDesignCalculator::on_cir3Value_editingFinished()
{
    updateCircuitParameter(2);
}


void ValveDesignCalculator::on_cir4Value_editingFinished()
{
    updateCircuitParameter(3);
}


void ValveDesignCalculator::on_cir5Value_editingFinished()
{
    updateCircuitParameter(4);
}


void ValveDesignCalculator::on_cir6Value_editingFinished()
{
    updateCircuitParameter(5);
}


void ValveDesignCalculator::on_cir7Value_editingFinished()
{
    updateCircuitParameter(6);
}

