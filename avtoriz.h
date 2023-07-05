#ifndef AVTORIZ_H
#define AVTORIZ_H
#include<admin.h>
#include<polz.h>
#include<vihod.h>



#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class avtoriz; }
QT_END_NAMESPACE

class avtoriz : public QMainWindow
{
    Q_OBJECT

public:
    avtoriz(QWidget *parent = nullptr);
    ~avtoriz();

private slots:

    void on_vihodAVTORIZ_clicked();
    int poisk(QString login, QString password);
    void on_AVTORIZ_clicked();


private:
    Ui::avtoriz *ui;
    admin *admins;
    polz *polzs;
    vihod out;



};
#endif // AVTORIZ_H
