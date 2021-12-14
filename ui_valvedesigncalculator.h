/********************************************************************************
** Form generated from reading UI file 'valvedesigncalculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALVEDESIGNCALCULATOR_H
#define UI_VALVEDESIGNCALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ValveDesignCalculator
{
public:
    QAction *actionLoad_Model;
    QAction *actionLoad_Measurement;
    QAction *actionExit;
    QAction *actionPrint;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_4;
    QComboBox *stdDeviceSelection;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QComboBox *stdModelSelection;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *customModel;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *par1Label;
    QLineEdit *par1Value;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *par2Label;
    QLineEdit *par2Value;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *par3Label;
    QLineEdit *par3Value;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_22;
    QLabel *par4Label;
    QLineEdit *par4Value;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_24;
    QLabel *par5Label;
    QLineEdit *par5Value;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_25;
    QLabel *par6Label;
    QLineEdit *par6Value;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_23;
    QLabel *par7Label;
    QLineEdit *par7Value;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *plotTitle;
    QComboBox *plotSelection;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_3;
    QGraphicsView *graphicsView;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *circuitSelection;
    QHBoxLayout *horizontalLayout_5;
    QLabel *cir1Label;
    QLineEdit *cir1Value;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *cir2Label;
    QLineEdit *cir2Value;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *cir3Label;
    QLineEdit *cir3Value;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *cir4Label;
    QLineEdit *cir4Value;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_10;
    QLabel *cir5Label;
    QLineEdit *cir5Value;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_12;
    QLabel *cir6Label;
    QLineEdit *cir6Value;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_13;
    QLabel *cir7Label;
    QLineEdit *cir7Value;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ValveDesignCalculator)
    {
        if (ValveDesignCalculator->objectName().isEmpty())
            ValveDesignCalculator->setObjectName(QString::fromUtf8("ValveDesignCalculator"));
        ValveDesignCalculator->resize(1198, 601);
        actionLoad_Model = new QAction(ValveDesignCalculator);
        actionLoad_Model->setObjectName(QString::fromUtf8("actionLoad_Model"));
        actionLoad_Measurement = new QAction(ValveDesignCalculator);
        actionLoad_Measurement->setObjectName(QString::fromUtf8("actionLoad_Measurement"));
        actionExit = new QAction(ValveDesignCalculator);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionPrint = new QAction(ValveDesignCalculator);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        centralwidget = new QWidget(ValveDesignCalculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 9, 1158, 541));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_16->addWidget(label_4);

        stdDeviceSelection = new QComboBox(horizontalLayoutWidget);
        stdDeviceSelection->setObjectName(QString::fromUtf8("stdDeviceSelection"));
        stdDeviceSelection->setMinimumSize(QSize(120, 0));
        stdDeviceSelection->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_16->addWidget(stdDeviceSelection);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_17->addWidget(label_5);

        stdModelSelection = new QComboBox(horizontalLayoutWidget);
        stdModelSelection->setObjectName(QString::fromUtf8("stdModelSelection"));
        stdModelSelection->setMinimumSize(QSize(120, 0));
        stdModelSelection->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_17->addWidget(stdModelSelection);


        verticalLayout->addLayout(horizontalLayout_17);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        customModel = new QVBoxLayout();
        customModel->setObjectName(QString::fromUtf8("customModel"));
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(240, 0));
        label_7->setMaximumSize(QSize(240, 16777215));

        customModel->addWidget(label_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        par1Label = new QLabel(horizontalLayoutWidget);
        par1Label->setObjectName(QString::fromUtf8("par1Label"));

        horizontalLayout_9->addWidget(par1Label);

        par1Value = new QLineEdit(horizontalLayoutWidget);
        par1Value->setObjectName(QString::fromUtf8("par1Value"));
        par1Value->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(par1Value->sizePolicy().hasHeightForWidth());
        par1Value->setSizePolicy(sizePolicy1);
        par1Value->setMinimumSize(QSize(60, 0));
        par1Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_9->addWidget(par1Value);

        horizontalSpacer_5 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        customModel->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        par2Label = new QLabel(horizontalLayoutWidget);
        par2Label->setObjectName(QString::fromUtf8("par2Label"));

        horizontalLayout_11->addWidget(par2Label);

        par2Value = new QLineEdit(horizontalLayoutWidget);
        par2Value->setObjectName(QString::fromUtf8("par2Value"));
        par2Value->setEnabled(true);
        sizePolicy1.setHeightForWidth(par2Value->sizePolicy().hasHeightForWidth());
        par2Value->setSizePolicy(sizePolicy1);
        par2Value->setMinimumSize(QSize(60, 0));
        par2Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_11->addWidget(par2Value);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);


        customModel->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        par3Label = new QLabel(horizontalLayoutWidget);
        par3Label->setObjectName(QString::fromUtf8("par3Label"));

        horizontalLayout_14->addWidget(par3Label);

        par3Value = new QLineEdit(horizontalLayoutWidget);
        par3Value->setObjectName(QString::fromUtf8("par3Value"));
        par3Value->setEnabled(true);
        sizePolicy1.setHeightForWidth(par3Value->sizePolicy().hasHeightForWidth());
        par3Value->setSizePolicy(sizePolicy1);
        par3Value->setMinimumSize(QSize(60, 0));
        par3Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_14->addWidget(par3Value);

        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);


        customModel->addLayout(horizontalLayout_14);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        par4Label = new QLabel(horizontalLayoutWidget);
        par4Label->setObjectName(QString::fromUtf8("par4Label"));

        horizontalLayout_22->addWidget(par4Label);

        par4Value = new QLineEdit(horizontalLayoutWidget);
        par4Value->setObjectName(QString::fromUtf8("par4Value"));
        par4Value->setEnabled(true);
        sizePolicy1.setHeightForWidth(par4Value->sizePolicy().hasHeightForWidth());
        par4Value->setSizePolicy(sizePolicy1);
        par4Value->setMinimumSize(QSize(60, 0));
        par4Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_22->addWidget(par4Value);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_4);


        customModel->addLayout(horizontalLayout_22);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        par5Label = new QLabel(horizontalLayoutWidget);
        par5Label->setObjectName(QString::fromUtf8("par5Label"));

        horizontalLayout_24->addWidget(par5Label);

        par5Value = new QLineEdit(horizontalLayoutWidget);
        par5Value->setObjectName(QString::fromUtf8("par5Value"));
        par5Value->setEnabled(true);
        sizePolicy1.setHeightForWidth(par5Value->sizePolicy().hasHeightForWidth());
        par5Value->setSizePolicy(sizePolicy1);
        par5Value->setMinimumSize(QSize(60, 0));
        par5Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_24->addWidget(par5Value);

        horizontalSpacer_8 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_8);


        customModel->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        par6Label = new QLabel(horizontalLayoutWidget);
        par6Label->setObjectName(QString::fromUtf8("par6Label"));

        horizontalLayout_25->addWidget(par6Label);

        par6Value = new QLineEdit(horizontalLayoutWidget);
        par6Value->setObjectName(QString::fromUtf8("par6Value"));
        par6Value->setEnabled(true);
        sizePolicy1.setHeightForWidth(par6Value->sizePolicy().hasHeightForWidth());
        par6Value->setSizePolicy(sizePolicy1);
        par6Value->setMinimumSize(QSize(60, 0));
        par6Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_25->addWidget(par6Value);

        horizontalSpacer_9 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_9);


        customModel->addLayout(horizontalLayout_25);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        par7Label = new QLabel(horizontalLayoutWidget);
        par7Label->setObjectName(QString::fromUtf8("par7Label"));

        horizontalLayout_23->addWidget(par7Label);

        par7Value = new QLineEdit(horizontalLayoutWidget);
        par7Value->setObjectName(QString::fromUtf8("par7Value"));
        par7Value->setEnabled(true);
        sizePolicy1.setHeightForWidth(par7Value->sizePolicy().hasHeightForWidth());
        par7Value->setSizePolicy(sizePolicy1);
        par7Value->setMinimumSize(QSize(60, 0));
        par7Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_23->addWidget(par7Value);

        horizontalSpacer_7 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_7);


        customModel->addLayout(horizontalLayout_23);


        verticalLayout->addLayout(customModel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        plotTitle = new QLabel(horizontalLayoutWidget);
        plotTitle->setObjectName(QString::fromUtf8("plotTitle"));
        sizePolicy.setHeightForWidth(plotTitle->sizePolicy().hasHeightForWidth());
        plotTitle->setSizePolicy(sizePolicy);
        plotTitle->setMinimumSize(QSize(80, 0));
        plotTitle->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_15->addWidget(plotTitle);

        plotSelection = new QComboBox(horizontalLayoutWidget);
        plotSelection->setObjectName(QString::fromUtf8("plotSelection"));
        plotSelection->setMinimumSize(QSize(160, 0));
        plotSelection->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_15->addWidget(plotSelection);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_17);


        verticalLayout_2->addLayout(horizontalLayout_15);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        graphicsView = new QGraphicsView(horizontalLayoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(500, 500));
        graphicsView->setMaximumSize(QSize(500, 500));

        verticalLayout_2->addWidget(graphicsView);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_3);

        circuitSelection = new QComboBox(horizontalLayoutWidget);
        circuitSelection->setObjectName(QString::fromUtf8("circuitSelection"));
        sizePolicy1.setHeightForWidth(circuitSelection->sizePolicy().hasHeightForWidth());
        circuitSelection->setSizePolicy(sizePolicy1);
        circuitSelection->setMinimumSize(QSize(160, 0));
        circuitSelection->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_4->addWidget(circuitSelection);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cir1Label = new QLabel(horizontalLayoutWidget);
        cir1Label->setObjectName(QString::fromUtf8("cir1Label"));

        horizontalLayout_5->addWidget(cir1Label);

        cir1Value = new QLineEdit(horizontalLayoutWidget);
        cir1Value->setObjectName(QString::fromUtf8("cir1Value"));
        sizePolicy1.setHeightForWidth(cir1Value->sizePolicy().hasHeightForWidth());
        cir1Value->setSizePolicy(sizePolicy1);
        cir1Value->setMinimumSize(QSize(60, 0));
        cir1Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(cir1Value);

        horizontalSpacer_10 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        cir2Label = new QLabel(horizontalLayoutWidget);
        cir2Label->setObjectName(QString::fromUtf8("cir2Label"));

        horizontalLayout_6->addWidget(cir2Label);

        cir2Value = new QLineEdit(horizontalLayoutWidget);
        cir2Value->setObjectName(QString::fromUtf8("cir2Value"));
        sizePolicy1.setHeightForWidth(cir2Value->sizePolicy().hasHeightForWidth());
        cir2Value->setSizePolicy(sizePolicy1);
        cir2Value->setMinimumSize(QSize(60, 0));
        cir2Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_6->addWidget(cir2Value);

        horizontalSpacer_11 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        cir3Label = new QLabel(horizontalLayoutWidget);
        cir3Label->setObjectName(QString::fromUtf8("cir3Label"));

        horizontalLayout_7->addWidget(cir3Label);

        cir3Value = new QLineEdit(horizontalLayoutWidget);
        cir3Value->setObjectName(QString::fromUtf8("cir3Value"));
        sizePolicy1.setHeightForWidth(cir3Value->sizePolicy().hasHeightForWidth());
        cir3Value->setSizePolicy(sizePolicy1);
        cir3Value->setMinimumSize(QSize(60, 0));
        cir3Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_7->addWidget(cir3Value);

        horizontalSpacer_12 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        cir4Label = new QLabel(horizontalLayoutWidget);
        cir4Label->setObjectName(QString::fromUtf8("cir4Label"));

        horizontalLayout_8->addWidget(cir4Label);

        cir4Value = new QLineEdit(horizontalLayoutWidget);
        cir4Value->setObjectName(QString::fromUtf8("cir4Value"));
        sizePolicy1.setHeightForWidth(cir4Value->sizePolicy().hasHeightForWidth());
        cir4Value->setSizePolicy(sizePolicy1);
        cir4Value->setMinimumSize(QSize(60, 0));
        cir4Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_8->addWidget(cir4Value);

        horizontalSpacer_13 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        cir5Label = new QLabel(horizontalLayoutWidget);
        cir5Label->setObjectName(QString::fromUtf8("cir5Label"));

        horizontalLayout_10->addWidget(cir5Label);

        cir5Value = new QLineEdit(horizontalLayoutWidget);
        cir5Value->setObjectName(QString::fromUtf8("cir5Value"));
        sizePolicy1.setHeightForWidth(cir5Value->sizePolicy().hasHeightForWidth());
        cir5Value->setSizePolicy(sizePolicy1);
        cir5Value->setMinimumSize(QSize(60, 0));
        cir5Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_10->addWidget(cir5Value);

        horizontalSpacer_14 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        cir6Label = new QLabel(horizontalLayoutWidget);
        cir6Label->setObjectName(QString::fromUtf8("cir6Label"));

        horizontalLayout_12->addWidget(cir6Label);

        cir6Value = new QLineEdit(horizontalLayoutWidget);
        cir6Value->setObjectName(QString::fromUtf8("cir6Value"));
        sizePolicy1.setHeightForWidth(cir6Value->sizePolicy().hasHeightForWidth());
        cir6Value->setSizePolicy(sizePolicy1);
        cir6Value->setMinimumSize(QSize(60, 0));
        cir6Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_12->addWidget(cir6Value);

        horizontalSpacer_15 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_15);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        cir7Label = new QLabel(horizontalLayoutWidget);
        cir7Label->setObjectName(QString::fromUtf8("cir7Label"));

        horizontalLayout_13->addWidget(cir7Label);

        cir7Value = new QLineEdit(horizontalLayoutWidget);
        cir7Value->setObjectName(QString::fromUtf8("cir7Value"));
        sizePolicy1.setHeightForWidth(cir7Value->sizePolicy().hasHeightForWidth());
        cir7Value->setSizePolicy(sizePolicy1);
        cir7Value->setMinimumSize(QSize(60, 0));
        cir7Value->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_13->addWidget(cir7Value);

        horizontalSpacer_16 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_16);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        ValveDesignCalculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ValveDesignCalculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1198, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        ValveDesignCalculator->setMenuBar(menubar);
        statusbar = new QStatusBar(ValveDesignCalculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ValveDesignCalculator->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad_Model);
        menuFile->addAction(actionLoad_Measurement);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);

        retranslateUi(ValveDesignCalculator);

        QMetaObject::connectSlotsByName(ValveDesignCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *ValveDesignCalculator)
    {
        ValveDesignCalculator->setWindowTitle(QCoreApplication::translate("ValveDesignCalculator", "ValveDesignCalculator", nullptr));
        actionLoad_Model->setText(QCoreApplication::translate("ValveDesignCalculator", "Load Model...", nullptr));
        actionLoad_Measurement->setText(QCoreApplication::translate("ValveDesignCalculator", "Load Measurement...", nullptr));
        actionExit->setText(QCoreApplication::translate("ValveDesignCalculator", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("ValveDesignCalculator", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("ValveDesignCalculator", "Print...", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("ValveDesignCalculator", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        label_4->setText(QCoreApplication::translate("ValveDesignCalculator", "Device:", nullptr));
        label_5->setText(QCoreApplication::translate("ValveDesignCalculator", "Model:", nullptr));
        label_7->setText(QCoreApplication::translate("ValveDesignCalculator", "Model parameters", nullptr));
        par1Label->setText(QCoreApplication::translate("ValveDesignCalculator", "Mu:", nullptr));
        par2Label->setText(QCoreApplication::translate("ValveDesignCalculator", "Kg:", nullptr));
        par3Label->setText(QCoreApplication::translate("ValveDesignCalculator", "Alpha:", nullptr));
        par4Label->setText(QCoreApplication::translate("ValveDesignCalculator", "Vct:", nullptr));
        par5Label->setText(QCoreApplication::translate("ValveDesignCalculator", "Kp:", nullptr));
        par6Label->setText(QCoreApplication::translate("ValveDesignCalculator", "Kvb:", nullptr));
        par7Label->setText(QCoreApplication::translate("ValveDesignCalculator", "Kvb2:", nullptr));
        plotTitle->setText(QCoreApplication::translate("ValveDesignCalculator", "Plot Type:", nullptr));
        label_3->setText(QCoreApplication::translate("ValveDesignCalculator", "Circuit Type:", nullptr));
        cir1Label->setText(QCoreApplication::translate("ValveDesignCalculator", "TextLabel", nullptr));
        cir2Label->setText(QCoreApplication::translate("ValveDesignCalculator", "TextLabel", nullptr));
        cir3Label->setText(QCoreApplication::translate("ValveDesignCalculator", "TextLabel", nullptr));
        cir4Label->setText(QCoreApplication::translate("ValveDesignCalculator", "TextLabel", nullptr));
        cir5Label->setText(QCoreApplication::translate("ValveDesignCalculator", "TextLabel", nullptr));
        cir6Label->setText(QCoreApplication::translate("ValveDesignCalculator", "TextLabel", nullptr));
        cir7Label->setText(QCoreApplication::translate("ValveDesignCalculator", "TextLabel", nullptr));
        menuFile->setTitle(QCoreApplication::translate("ValveDesignCalculator", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("ValveDesignCalculator", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ValveDesignCalculator: public Ui_ValveDesignCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALVEDESIGNCALCULATOR_H
