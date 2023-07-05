#include "admin.h"
#include "ui_admin.h"



admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);
    QPainterPath painPath;
    painPath.addRoundedRect(rect(), 30, 30, Qt::AbsoluteSize);
    this->setMask(painPath.toFillPolygon().toPolygon());
}

admin::~admin()
{
    delete ui;
}



void admin::on_nazad_clicked()
{
    this->close();
    emit firstWindow();
}


void admin::on_dobavlPOLZ_clicked()
{

    int i = 2;
    if (ui->addadmin->isChecked())
        i = 1;
}
