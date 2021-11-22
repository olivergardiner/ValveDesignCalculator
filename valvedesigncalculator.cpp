#include "valvedesigncalculator.h"
#include "ui_valvedesigncalculator.h"

ValveDesignCalculator::ValveDesignCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ValveDesignCalculator)
{
    ui->setupUi(this);
}

ValveDesignCalculator::~ValveDesignCalculator()
{
    delete ui;
}


void ValveDesignCalculator::on_actionExit_triggered()
{

}


void ValveDesignCalculator::on_actionPrint_triggered()
{

}


void ValveDesignCalculator::on_actionLoad_Model_triggered()
{
    QString modelName = QFileDialog::getOpenFileName(this, "Open model", "", "*.mdl");
}


void ValveDesignCalculator::on_actionLoad_Measurement_triggered()
{

}

