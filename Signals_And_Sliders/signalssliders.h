#ifndef SIGNALSSLIDERS_H
#define SIGNALSSLIDERS_H

#include <QMainWindow>

namespace Ui {
class signalsSliders;
}

class signalsSliders : public QMainWindow
{
    Q_OBJECT

public:
    explicit signalsSliders(QWidget *parent = 0);
    ~signalsSliders();

private:
    Ui::signalsSliders *ui;
};

#endif // SIGNALSSLIDERS_H
