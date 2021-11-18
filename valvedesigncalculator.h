#ifndef VALVEDESIGNCALCULATOR_H
#define VALVEDESIGNCALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ValveDesignCalculator; }
QT_END_NAMESPACE

class ValveDesignCalculator : public QMainWindow
{
    Q_OBJECT

public:
    ValveDesignCalculator(QWidget *parent = nullptr);
    ~ValveDesignCalculator();

private:
    Ui::ValveDesignCalculator *ui;
};
#endif // VALVEDESIGNCALCULATOR_H
