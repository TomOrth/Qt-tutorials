/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWorld
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *helloLabel;
    QMenuBar *menuBar;
    QMenu *menuHello_World;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloWorld)
    {
        if (HelloWorld->objectName().isEmpty())
            HelloWorld->setObjectName(QStringLiteral("HelloWorld"));
        HelloWorld->resize(400, 300);
        centralWidget = new QWidget(HelloWorld);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 97, 26));
        helloLabel = new QLabel(centralWidget);
        helloLabel->setObjectName(QStringLiteral("helloLabel"));
        helloLabel->setGeometry(QRect(140, 40, 67, 17));
        HelloWorld->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloWorld);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuHello_World = new QMenu(menuBar);
        menuHello_World->setObjectName(QStringLiteral("menuHello_World"));
        HelloWorld->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloWorld);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HelloWorld->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloWorld);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HelloWorld->setStatusBar(statusBar);

        menuBar->addAction(menuHello_World->menuAction());

        retranslateUi(HelloWorld);

        QMetaObject::connectSlotsByName(HelloWorld);
    } // setupUi

    void retranslateUi(QMainWindow *HelloWorld)
    {
        HelloWorld->setWindowTitle(QApplication::translate("HelloWorld", "HelloWorld", 0));
        pushButton->setText(QApplication::translate("HelloWorld", "Hello World", 0));
        helloLabel->setText(QApplication::translate("HelloWorld", "TextLabel", 0));
        menuHello_World->setTitle(QApplication::translate("HelloWorld", "Hello World", 0));
    } // retranslateUi

};

namespace Ui {
    class HelloWorld: public Ui_HelloWorld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
