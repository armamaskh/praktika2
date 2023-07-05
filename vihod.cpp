#include "vihod.h"
#include "ui_vihod.h"

vihod::vihod(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vihod)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);
    QPainterPath painPath;
    painPath.addRoundedRect(rect(), 30, 30, Qt::AbsoluteSize);
    this->setMask(painPath.toFillPolygon().toPolygon());

}

vihod::~vihod()
{
    delete ui;
}

void vihod::on_vihod_2_clicked()
{
    QApplication::quit();

}


