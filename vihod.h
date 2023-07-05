#ifndef VIHOD_H
#define VIHOD_H
#include <QMainWindow>

namespace Ui {
class vihod;
}

class vihod : public QMainWindow
{
    Q_OBJECT

public:
    explicit vihod(QWidget *parent = nullptr);
    ~vihod();
private slots:

    void on_vihod_2_clicked();

private:
    Ui::vihod *ui;


};

#endif // VIHOD_H
