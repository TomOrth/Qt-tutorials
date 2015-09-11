/********************************************************************************
** Form generated from reading UI file 'signalssliders.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALSSLIDERS_H
#define UI_SIGNALSSLIDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signalsSliders
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSlider *slider;
    QProgressBar *progress;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *signalsSliders)
    {
        if (signalsSliders->objectName().isEmpty())
            signalsSliders->setObjectName(QStringLiteral("signalsSliders"));
        signalsSliders->resize(400, 300);
        centralWidget = new QWidget(signalsSliders);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 90, 97, 49));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        slider = new QSlider(widget);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider);

        progress = new QProgressBar(widget);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setValue(24);

        verticalLayout->addWidget(progress);

        signalsSliders->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(signalsSliders);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        signalsSliders->setMenuBar(menuBar);
        mainToolBar = new QToolBar(signalsSliders);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        signalsSliders->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(signalsSliders);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        signalsSliders->setStatusBar(statusBar);

        retranslateUi(signalsSliders);
        QObject::connect(slider, SIGNAL(valueChanged(int)), progress, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(signalsSliders);
    } // setupUi

    void retranslateUi(QMainWindow *signalsSliders)
    {
        signalsSliders->setWindowTitle(QApplication::translate("signalsSliders", "signalsSliders", 0));
    } // retranslateUi

};

namespace Ui {
    class signalsSliders: public Ui_signalsSliders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALSSLIDERS_H
