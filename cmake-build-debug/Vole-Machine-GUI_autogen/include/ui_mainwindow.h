/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *openInstructionButton;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QGroupBox *groupBox_4;
    QPushButton *excuteButton;
    QPushButton *decodeButton;
    QPushButton *fetchButton;
    QLabel *label;
    QLineEdit *pCounter;
    QLineEdit *instructionDecode;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *opCodeDisplay;
    QTextEdit *encodedInsMessage;
    QLabel *label_4;
    QLineEdit *rDisplay;
    QLineEdit *xDisplay;
    QLabel *label_13;
    QLineEdit *yDisplay;
    QLabel *label_14;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QTableWidget *memoryDisplay;
    QLabel *label_5;
    QTableWidget *registerDisplay;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(985, 627);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        openInstructionButton = new QPushButton(centralwidget);
        openInstructionButton->setObjectName("openInstructionButton");
        openInstructionButton->setGeometry(QRect(620, 550, 131, 27));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(620, 20, 341, 171));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 550, 291, 27));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 550, 291, 27));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(870, 200, 94, 27));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(620, 230, 341, 311));
        excuteButton = new QPushButton(groupBox_4);
        excuteButton->setObjectName("excuteButton");
        excuteButton->setGeometry(QRect(10, 250, 321, 27));
        decodeButton = new QPushButton(groupBox_4);
        decodeButton->setObjectName("decodeButton");
        decodeButton->setGeometry(QRect(260, 80, 71, 27));
        fetchButton = new QPushButton(groupBox_4);
        fetchButton->setObjectName("fetchButton");
        fetchButton->setGeometry(QRect(260, 40, 71, 27));
        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 131, 41));
        pCounter = new QLineEdit(groupBox_4);
        pCounter->setObjectName("pCounter");
        pCounter->setGeometry(QRect(140, 40, 113, 26));
        instructionDecode = new QLineEdit(groupBox_4);
        instructionDecode->setObjectName("instructionDecode");
        instructionDecode->setGeometry(QRect(140, 80, 113, 26));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 131, 41));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 130, 71, 18));
        opCodeDisplay = new QLineEdit(groupBox_4);
        opCodeDisplay->setObjectName("opCodeDisplay");
        opCodeDisplay->setGeometry(QRect(80, 130, 31, 21));
        encodedInsMessage = new QTextEdit(groupBox_4);
        encodedInsMessage->setObjectName("encodedInsMessage");
        encodedInsMessage->setGeometry(QRect(10, 170, 321, 71));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 130, 21, 18));
        rDisplay = new QLineEdit(groupBox_4);
        rDisplay->setObjectName("rDisplay");
        rDisplay->setGeometry(QRect(140, 130, 31, 21));
        xDisplay = new QLineEdit(groupBox_4);
        xDisplay->setObjectName("xDisplay");
        xDisplay->setGeometry(QRect(200, 130, 31, 21));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(180, 130, 21, 18));
        yDisplay = new QLineEdit(groupBox_4);
        yDisplay->setObjectName("yDisplay");
        yDisplay->setGeometry(QRect(260, 130, 31, 21));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(240, 130, 21, 18));
        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 280, 131, 27));
        pushButton_6 = new QPushButton(groupBox_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(150, 280, 181, 27));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(760, 550, 201, 27));
        memoryDisplay = new QTableWidget(centralwidget);
        memoryDisplay->setObjectName("memoryDisplay");
        memoryDisplay->setGeometry(QRect(20, 40, 291, 501));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 20, 67, 18));
        registerDisplay = new QTableWidget(centralwidget);
        registerDisplay->setObjectName("registerDisplay");
        registerDisplay->setGeometry(QRect(320, 40, 291, 501));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 20, 67, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 985, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openInstructionButton->setText(QCoreApplication::translate("MainWindow", "Add Instructions", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Screen", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Clear Memory", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Clear Register", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear Screen", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Control", nullptr));
        excuteButton->setText(QCoreApplication::translate("MainWindow", "Excute", nullptr));
        decodeButton->setText(QCoreApplication::translate("MainWindow", "Decode", nullptr));
        fetchButton->setText(QCoreApplication::translate("MainWindow", "Fetch", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Program counter:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Instruction:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "OP Code:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Run one Cycle", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Run Until Halt", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "How to use", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Memory", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
