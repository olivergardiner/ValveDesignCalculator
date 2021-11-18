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

