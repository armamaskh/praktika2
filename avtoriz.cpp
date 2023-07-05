#include "avtoriz.h"
#include "ui_avtoriz.h"
#include <QMap>
#include <QVector>
#include <QString>
#include<QProcess>
#include<QDebug>

class LPIterator {
public:
    LPIterator(const QMap<int, QVector<QString>>& lp)
        : lp(lp), currentKey(lp.begin()), currentValue(lp[currentKey.key()].begin()) {
    }


    bool hasNext() const {
    return currentKey != lp.end() ;
    }

    QMap<int, QVector<QString>>::const_iterator currentKey;


    QString next() {
        const QString& value = *currentValue;
        ++currentValue;

        if (currentValue == lp[currentKey.key()].end() && currentKey.key() < 2) {
            ++currentKey;
            if (currentKey != lp.end()){
                currentValue = lp[currentKey.key()].begin();
                return value;}
        }

        return value;
    }

private:
    const QMap<int, QVector<QString>>& lp;
    QVector<QString>::const_iterator currentValue;
};


class LP {
public:
    void addItem(int key, const QString& value) {
        LP[key].append(value);
    }
    void removeItem(int key, const QString& value) {
        QVector<QString>& values = LP[key];

        for (auto it = values.begin(); it != values.end();) {
            if (*it == value) {
                it = values.erase(it);  // Удаляем текущий элемент
                if (it != values.end()) {
                    it = values.erase(it);  // Удаляем следующий элемент
                }
            } else {
                ++it;
            }
        }
    }
    LPIterator iterator() const {
        return LPIterator(LP);
    }
        QMap<int, QVector<QString>> LP;
};


int avtoriz::poisk(QString login, QString password) {
    LP lp;
    lp.addItem(1,"11");
    lp.addItem(1,"22");
    lp.addItem(1,"33");
    lp.addItem(1,"44");
    lp.addItem(2,"1");
    lp.addItem(2,"2");
    lp.addItem(2,"3");
    lp.addItem(2,"4");
    lp.addItem(2,"5");
    lp.addItem(2,"6");

    LPIterator it = lp.iterator();

    lp.removeItem(2,"5");
    for (; it.hasNext() ;) {
        const QString& currentLogin = it.next();
        int tag = it.currentKey.key();
        const QString& currentPassword = it.next();
        if (currentLogin == login && currentPassword == password) {
            return tag;        }
        else{
            qDebug() << "ОТДЫХАЙТЕ! ЛОГИН ИЛИ ПАРОЛЬ НЕВЕРНЫЕ!";



        }
    }

};




avtoriz::avtoriz(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::avtoriz)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);
    QPainterPath painPath;
    painPath.addRoundedRect(rect(), 30, 30, Qt::AbsoluteSize);
    this->setMask(painPath.toFillPolygon().toPolygon());

    admins = new admin();
    connect(admins, &admin::firstWindow,this, &QMainWindow::show);
    polzs = new polz();
    connect(polzs, &polz::firstWindow,this, &QMainWindow::show);



}


avtoriz::~avtoriz()
{
    delete ui;
}



void avtoriz::on_vihodAVTORIZ_clicked()
{
    out.show();
}


void avtoriz::on_AVTORIZ_clicked()
{
    LP LP;
    QString login = ui->login->text();
    QString password = ui->password->text();

    int t = poisk(login,password);


    switch(t){
    case 1:
        admins->show();
        this->close();
        break;
    case 2:
        polzs->show();
        this->close();
        break;}

}
