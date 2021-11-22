#ifndef VALVEDESIGNCALCULATOR_H
#define VALVEDESIGNCALCULATOR_H

#include <QMainWindow>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ValveDesignCalculator; }
QT_END_NAMESPACE

class ValveDesignCalculator : public QMainWindow
{
    Q_OBJECT

public:
    ValveDesignCalculator(QWidget *parent = nullptr);
    ~ValveDesignCalculator();

private slots:
    void on_actionExit_triggered();

    void on_actionPrint_triggered();

    void on_actionLoad_Model_triggered();

    void on_actionLoad_Measurement_triggered();

private:
    Ui::ValveDesignCalculator *ui;
};
#endif // VALVEDESIGNCALCULATOR_H
