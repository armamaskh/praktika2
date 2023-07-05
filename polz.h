#ifndef POLZ_H
#define POLZ_H

#include <QMainWindow>


namespace Ui {
class polz;
}

class polz : public QMainWindow
{
    Q_OBJECT

public:
    explicit polz(QWidget *parent = nullptr);
    ~polz();

signals:
    void firstWindow();

private slots:


    void on_nazad_clicked();

private:
    Ui::polz *ui;

};

#endif // POLZ_H
