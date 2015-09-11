/********************************************************************************
** Form generated from reading UI file 'messages.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGES_H
#define UI_MESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messages
{
public:
    QWidget *centralWidget;
    QPushButton *msger;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Messages)
    {
        if (Messages->objectName().isEmpty())
            Messages->setObjectName(QStringLiteral("Messages"));
        Messages->resize(400, 300);
        centralWidget = new QWidget(Messages);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        msger = new QPushButton(centralWidget);
        msger->setObjectName(QStringLiteral("msger"));
        msger->setGeometry(QRect(160, 90, 97, 26));
        Messages->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Messages);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        Messages->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Messages);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Messages->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Messages);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Messages->setStatusBar(statusBar);

        retranslateUi(Messages);

        QMetaObject::connectSlotsByName(Messages);
    } // setupUi

    void retranslateUi(QMainWindow *Messages)
    {
        Messages->setWindowTitle(QApplication::translate("Messages", "Messages", 0));
        msger->setText(QApplication::translate("Messages", "Greetings", 0));
    } // retranslateUi

};

namespace Ui {
    class Messages: public Ui_Messages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGES_H
