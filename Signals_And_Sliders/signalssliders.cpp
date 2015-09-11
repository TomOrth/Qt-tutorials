#include "signalssliders.h"
#include "ui_signalssliders.h"

signalsSliders::signalsSliders(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signalsSliders)
{
    ui->setupUi(this);
}

signalsSliders::~signalsSliders()
{
    delete ui;
}
