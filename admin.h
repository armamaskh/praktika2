#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>







namespace Ui {
class admin;
}

class admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();
    void sendd(int i,QString login, QString password);

signals:
    void firstWindow();

private slots:


    void on_nazad_clicked();

    void on_dobavlPOLZ_clicked();

private:
    Ui::admin *ui;

};

#endif // ADMIN_H
