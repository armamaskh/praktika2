/********************************************************************************
** Form generated from reading UI file 'avtoriz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVTORIZ_H
#define UI_AVTORIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_avtoriz
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QLineEdit *login;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QPushButton *vihodAVTORIZ;
    QPushButton *AVTORIZ;
    QLabel *label_5;
    QLineEdit *password;

    void setupUi(QMainWindow *avtoriz)
    {
        if (avtoriz->objectName().isEmpty())
            avtoriz->setObjectName(QString::fromUtf8("avtoriz"));
        avtoriz->resize(896, 171);
        avtoriz->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border:8px solid #000000;\n"
"  border-radius: 25px;\n"
""));
        centralwidget = new QWidget(avtoriz);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, -110, 201, 201));
        QFont font;
        font.setFamily(QString::fromUtf8("SETxt"));
        font.setPointSize(13);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:1px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));"));
        label_4->setText(QString::fromUtf8(""));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setScaledContents(false);
        login = new QLineEdit(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(20, 90, 291, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SETxt"));
        font1.setPointSize(12);
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 70px;\n"
"padding-right: 30px;\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 60, 91, 131));
        label_6->setSizeIncrement(QSize(0, 1));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:1px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));"));
        label_6->setText(QString::fromUtf8(""));
        label_6->setTextFormat(Qt::PlainText);
        label_6->setScaledContents(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(640, 40, 491, 151));
        QFont font2;
        font2.setFamily(QString::fromUtf8("SETxt"));
        font2.setPointSize(39);
        font2.setBold(false);
        font2.setUnderline(true);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:2px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"color: rgb(0, 0, 0);"));
        label_7->setText(QString::fromUtf8("go"));
        label_7->setTextFormat(Qt::PlainText);
        label_7->setScaledContents(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-40, -60, 931, 171));
        QFont font3;
        font3.setFamily(QString::fromUtf8("SETxt"));
        font3.setPointSize(72);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("  border:0px solid #000000;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.483409, x2:1, y2:0.363, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"  border-radius: 30 px;\n"
"color: rgb(0, 0, 0);\n"
""));
        vihodAVTORIZ = new QPushButton(centralwidget);
        vihodAVTORIZ->setObjectName(QString::fromUtf8("vihodAVTORIZ"));
        vihodAVTORIZ->setGeometry(QRect(780, 40, 261, 121));
        vihodAVTORIZ->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:2px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));"));
        AVTORIZ = new QPushButton(centralwidget);
        AVTORIZ->setObjectName(QString::fromUtf8("AVTORIZ"));
        AVTORIZ->setGeometry(QRect(640, 40, 491, 151));
        AVTORIZ->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:2px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(780, 40, 261, 121));
        QFont font4;
        font4.setFamily(QString::fromUtf8("SETxt"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferAntialias);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:2px solid #000000;\n"
"  border-radius: 25px;\n"
"background-color: qlineargradient(spread:reflect, x1:0.379538, y1:0.568, x2:0.581, y2:0.544682, stop:0 rgba(255, 255, 255, 0), stop:1 rgba(187, 187, 187, 0));\n"
"color: rgb(0, 0, 0);"));
        label_5->setText(QString::fromUtf8("out"));
        label_5->setTextFormat(Qt::PlainText);
        label_5->setScaledContents(false);
        password = new QLineEdit(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(350, 100, 231, 51));
        password->setFont(font1);
        password->setStyleSheet(QString::fromUtf8("  background-color: #ffffff;\n"
"  border:4px solid #000000;\n"
"  border-radius: 25px;\n"
"color: rgb(0, 0, 0);\n"
"padding-left: 40px;\n"
"padding-right: 30px;\n"
""));
        avtoriz->setCentralWidget(centralwidget);
        label_4->raise();
        label_6->raise();
        label_7->raise();
        label_3->raise();
        AVTORIZ->raise();
        label_5->raise();
        login->raise();
        password->raise();
        vihodAVTORIZ->raise();

        retranslateUi(avtoriz);

        QMetaObject::connectSlotsByName(avtoriz);
    } // setupUi

    void retranslateUi(QMainWindow *avtoriz)
    {
        avtoriz->setWindowTitle(QApplication::translate("avtoriz", "avtoriz", nullptr));
        login->setPlaceholderText(QApplication::translate("avtoriz", "   LOGIN", nullptr));
        label_3->setText(QApplication::translate("avtoriz", "<html><head/><body><p align=\"center\"><span style=\" text-decoration: underline;\">Autorization</span></p></body></html>", nullptr));
        vihodAVTORIZ->setText(QString());
        AVTORIZ->setText(QString());
        password->setPlaceholderText(QApplication::translate("avtoriz", " PASSWORD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class avtoriz: public Ui_avtoriz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVTORIZ_H
