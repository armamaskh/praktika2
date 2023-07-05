#include "polz.h"
#include "ui_polz.h"

polz::polz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::polz)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);
    QPainterPath painPath;
    painPath.addRoundedRect(rect(), 30, 30, Qt::AbsoluteSize);
    this->setMask(painPath.toFillPolygon().toPolygon());

}

polz::~polz()
{
    delete ui;
}




void polz::on_nazad_clicked()
{
    this->close();
    emit firstWindow();
}

