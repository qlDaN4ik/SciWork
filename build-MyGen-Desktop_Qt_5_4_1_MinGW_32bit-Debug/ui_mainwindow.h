/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_6;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QCustomPlot *widget_2;
    QCustomPlot *widget_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(929, 687);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 80, 331, 371));
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(140, 160, 71, 41));
        lineEdit_4->setMinimumSize(QSize(21, 0));
        lineEdit_4->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(10, 160, 131, 41));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit->setMaxLength(32767);
        lineEdit->setCursorPosition(11);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setDragEnabled(false);
        lineEdit->setReadOnly(true);
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(210, 160, 31, 41));
        lineEdit_3->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(240, 160, 71, 41));
        lineEdit_2->setMinimumSize(QSize(21, 0));
        lineEdit_2->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setEnabled(true);
        lineEdit_7->setGeometry(QRect(240, 210, 31, 41));
        lineEdit_7->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);
        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setEnabled(true);
        lineEdit_6->setGeometry(QRect(10, 210, 171, 41));
        lineEdit_6->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_6->setReadOnly(true);
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(180, 210, 61, 41));
        spinBox->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMaximum(100);
        spinBox->setValue(10);
        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setEnabled(true);
        lineEdit_8->setGeometry(QRect(170, 10, 51, 41));
        lineEdit_8->setMinimumSize(QSize(21, 0));
        lineEdit_8->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(10, 10, 161, 41));
        lineEdit_5->setLayoutDirection(Qt::LeftToRight);
        lineEdit_5->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        lineEdit_5->setMaxLength(32767);
        lineEdit_5->setCursorPosition(16);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setDragEnabled(false);
        lineEdit_5->setReadOnly(true);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 80, 131, 41));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(77, 310, 141, 41));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 270, 131, 23));
        widget_2 = new QCustomPlot(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(340, 10, 580, 310));
        widget_2->setCursor(QCursor(Qt::ArrowCursor));
        widget_3 = new QCustomPlot(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(340, 320, 580, 310));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 929, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lineEdit_4->setText(QApplication::translate("MainWindow", "0", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "\320\224\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \320\276\321\202", 0));
        lineEdit_3->setText(QApplication::translate("MainWindow", "\320\264\320\276", 0));
        lineEdit_2->setText(QApplication::translate("MainWindow", "10", 0));
        lineEdit_7->setText(QApplication::translate("MainWindow", "%", 0));
        lineEdit_6->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \320\274\321\203\321\202\320\260\321\206\320\270\320\270", 0));
        lineEdit_8->setText(QApplication::translate("MainWindow", "0.3", 0));
        lineEdit_5->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204. \321\200\320\260\320\267\320\274\321\213\321\202\320\276\321\201\321\202\320\270", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\260\321\217 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\262\321\213\320\261\320\276\321\200\320\272\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
