#include "valvedesigncalculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ValveDesignCalculator w;
    w.show();
    return a.exec();
}
