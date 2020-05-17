/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *new_2;
    QAction *save;
    QAction *start;
    QAction *stop;
    QAction *arrowtool;
    QAction *faultmode;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menufile;
    QMenu *menutest;
    QMenu *menunetconfig;
    QMenu *menutoolbar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1081, 814);
        new_2 = new QAction(MainWindow);
        new_2->setObjectName(QString::fromUtf8("new_2"));
        save = new QAction(MainWindow);
        save->setObjectName(QString::fromUtf8("save"));
        start = new QAction(MainWindow);
        start->setObjectName(QString::fromUtf8("start"));
        stop = new QAction(MainWindow);
        stop->setObjectName(QString::fromUtf8("stop"));
        arrowtool = new QAction(MainWindow);
        arrowtool->setObjectName(QString::fromUtf8("arrowtool"));
        arrowtool->setVisible(true);
        faultmode = new QAction(MainWindow);
        faultmode->setObjectName(QString::fromUtf8("faultmode"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(35, 41, 861, 691));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1081, 26));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menutest = new QMenu(menuBar);
        menutest->setObjectName(QString::fromUtf8("menutest"));
        menunetconfig = new QMenu(menuBar);
        menunetconfig->setObjectName(QString::fromUtf8("menunetconfig"));
        menutoolbar = new QMenu(menuBar);
        menutoolbar->setObjectName(QString::fromUtf8("menutoolbar"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(163, 749));
        dockWidget->setMaximumSize(QSize(198, 524287));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(141, 701));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menufile->menuAction());
        menuBar->addAction(menutest->menuAction());
        menuBar->addAction(menutoolbar->menuAction());
        menuBar->addAction(menunetconfig->menuAction());
        menufile->addAction(new_2);
        menufile->addAction(save);
        menutest->addAction(start);
        menutest->addAction(stop);
        menutoolbar->addAction(arrowtool);
        menutoolbar->addAction(faultmode);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        new_2->setText(QApplication::translate("MainWindow", "new", nullptr));
        save->setText(QApplication::translate("MainWindow", "save", nullptr));
        start->setText(QApplication::translate("MainWindow", "start", nullptr));
        stop->setText(QApplication::translate("MainWindow", "stop", nullptr));
        arrowtool->setText(QApplication::translate("MainWindow", "arrowtool", nullptr));
        faultmode->setText(QApplication::translate("MainWindow", "faultmode", nullptr));
        menufile->setTitle(QApplication::translate("MainWindow", "file", nullptr));
        menutest->setTitle(QApplication::translate("MainWindow", "test", nullptr));
        menunetconfig->setTitle(QApplication::translate("MainWindow", "netconfig", nullptr));
        menutoolbar->setTitle(QApplication::translate("MainWindow", "toolbar", nullptr));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\346\225\205\351\232\234\345\267\245\345\205\267\347\256\261", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\346\225\205\351\232\234\351\241\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
