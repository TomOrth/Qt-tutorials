#include "messages.h"
#include "ui_messages.h"
#include<QMessageBox>
Messages::Messages(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Messages)
{
    ui->setupUi(this);
}

Messages::~Messages()
{
    delete ui;
}

void Messages::on_msger_clicked()
{
    QMessageBox::information(this, tr("Hello"), tr("This is an information prompt"));
    QMessageBox::warning(this, tr("Warning"), tr("This is a warning"));
    QMessageBox::critical(this, tr("Critical"), tr("Critical Warning"));
}
