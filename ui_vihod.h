/********************************************************************************
** Form generated from reading UI file 'vihod.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIHOD_H
#define UI_VIHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vihod
{
public:
    QWidget *centralwidget;
    QPushButton *vihod_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *nazad;
    QLabel *label_4;

    void setupUi(QMainWindow *vihod)
    {
        if (vihod->objectName().isEmpty())
            vihod->setObjectName(QString::fromUtf8("vihod"));
        vihod->resize(835, 200);
        vihod->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border:8px solid #000000;\n"
"  border-radius: 25px;\n"
""));
        centralwidget = new QWidget(vihod);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vihod_2 = new QPushButton(centralwidget);
        vihod_2->setObjectName(QString::fromUtf8("vihod_2"));
        vihod_2->setGeometry(QRect(547, 120, 271, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("SETxt"));
        font.setPointSize(20);
        vihod_2->setFont(font);
        vihod_2->setStyleSheet(QString::fromUtf8("  border:2px solid #000000;\n"
"  border-radius: 30px;\n"
"background-color: rgb(207, 20, 23);\n"
"color: rgb(255, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, -70, 491, 141));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SETxt"));
        font1.setPointSize(70);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("  border:0px solid #000000;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.483409, x2:1, y2:0.363, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"  border-radius: 30 px;\n"
"color: rgb(0, 0, 0);\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(610, -120, 511, 201));
        QFont font2;
        font2.setFamily(QString::fromUtf8("SETxt"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"color: rgb(0, 0, 0);"));
        label_6->setText(QString::fromUtf8(""));
        label_6->setTextFormat(Qt::PlainText);
        label_6->setScaledContents(false);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(-18, 58, 521, 231));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"color: rgb(0, 0, 0);"));
        label_5->setText(QString::fromUtf8(""));
        label_5->setTextFormat(Qt::PlainText);
        label_5->setScaledContents(false);
        nazad = new QPushButton(centralwidget);
        nazad->setObjectName(QString::fromUtf8("nazad"));
        nazad->setGeometry(QRect(18, 120, 511, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("SETxt"));
        font3.setPointSize(9);
        nazad->setFont(font3);
        nazad->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"  border:2px solid #000000;\n"
"  border-radius: 30px;\n"
"padding-left: 0px;\n"
"padding-up: 40px;\n"
"background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(321, 6, 481, 141));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("  border:0px solid #000000;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.483409, x2:1, y2:0.363, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"  border-radius: 30 px;\n"
"color: rgb(0, 0, 0);\n"
""));
        vihod->setCentralWidget(centralwidget);
        label_3->raise();
        label_6->raise();
        label_5->raise();
        label_4->raise();
        nazad->raise();
        vihod_2->raise();

        retranslateUi(vihod);
        QObject::connect(nazad, SIGNAL(clicked()), vihod, SLOT(close()));

        QMetaObject::connectSlotsByName(vihod);
    } // setupUi

    void retranslateUi(QMainWindow *vihod)
    {
        vihod->setWindowTitle(QApplication::translate("vihod", "MainWindow", nullptr));
        vihod_2->setText(QApplication::translate("vihod", "\320\224\320\236 \320\241\320\222\320\230\320\224\320\243\320\233\320\230!", nullptr));
        label_3->setText(QApplication::translate("vihod", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:600;\">\321\205\320\276\321\202\320\270\321\202\320\265 </span></p></body></html>", nullptr));
        nazad->setText(QApplication::translate("vihod", "\320\275\320\260\320\267\320\260\320\264", nullptr));
        label_4->setText(QApplication::translate("vihod", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:600; text-decoration: underline;\">\320\262\321\213\320\271\321\202\320\270?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vihod: public Ui_vihod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIHOD_H
