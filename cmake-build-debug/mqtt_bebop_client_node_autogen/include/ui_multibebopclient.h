/********************************************************************************
** Form generated from reading UI file 'multibebopclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIBEBOPCLIENT_H
#define UI_MULTIBEBOPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QWebEngineView"

QT_BEGIN_NAMESPACE

class Ui_MultiBebopClient
{
public:
    QWidget *centralwidget;
    QWebEngineView *webviewWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *start_roscore_button;
    QPushButton *start_node_button;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *single_control_button;
    QRadioButton *server_control_button;
    QLabel *label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *takeoff_button;
    QPushButton *land_button;
    QPushButton *start_button;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *battery;
    QLabel *altitude;
    QLabel *lattitude;
    QLabel *longitude;
    QLabel *speed;

    void setupUi(QMainWindow *MultiBebopClient)
    {
        if (MultiBebopClient->objectName().isEmpty())
            MultiBebopClient->setObjectName(QStringLiteral("MultiBebopClient"));
        MultiBebopClient->resize(1200, 800);
        centralwidget = new QWidget(MultiBebopClient);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        webviewWidget = new QWebEngineView(centralwidget);
        webviewWidget->setObjectName(QStringLiteral("webviewWidget"));
        webviewWidget->setGeometry(QRect(10, 150, 1180, 430));
        webviewWidget->setStyleSheet(QStringLiteral("border: 1px solid;"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 1181, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        start_roscore_button = new QPushButton(horizontalLayoutWidget);
        start_roscore_button->setObjectName(QStringLiteral("start_roscore_button"));

        horizontalLayout->addWidget(start_roscore_button);

        start_node_button = new QPushButton(horizontalLayoutWidget);
        start_node_button->setObjectName(QStringLiteral("start_node_button"));

        horizontalLayout->addWidget(start_node_button);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 50, 1181, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        single_control_button = new QRadioButton(horizontalLayoutWidget_2);
        single_control_button->setObjectName(QStringLiteral("single_control_button"));

        horizontalLayout_2->addWidget(single_control_button);

        server_control_button = new QRadioButton(horizontalLayoutWidget_2);
        server_control_button->setObjectName(QStringLiteral("server_control_button"));

        horizontalLayout_2->addWidget(server_control_button);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 590, 370, 200));
        label->setStyleSheet(QLatin1String("border: 1px solid;\n"
"background-color: rgb(0, 0, 0);"));
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 100, 1181, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        takeoff_button = new QPushButton(horizontalLayoutWidget_3);
        takeoff_button->setObjectName(QStringLiteral("takeoff_button"));

        horizontalLayout_3->addWidget(takeoff_button);

        land_button = new QPushButton(horizontalLayoutWidget_3);
        land_button->setObjectName(QStringLiteral("land_button"));

        horizontalLayout_3->addWidget(land_button);

        start_button = new QPushButton(horizontalLayoutWidget_3);
        start_button->setObjectName(QStringLiteral("start_button"));

        horizontalLayout_3->addWidget(start_button);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(390, 590, 251, 201));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_6 = new QLabel(horizontalLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        battery = new QLabel(horizontalLayoutWidget_4);
        battery->setObjectName(QStringLiteral("battery"));
        battery->setFont(font);

        verticalLayout_2->addWidget(battery);

        altitude = new QLabel(horizontalLayoutWidget_4);
        altitude->setObjectName(QStringLiteral("altitude"));
        altitude->setFont(font);

        verticalLayout_2->addWidget(altitude);

        lattitude = new QLabel(horizontalLayoutWidget_4);
        lattitude->setObjectName(QStringLiteral("lattitude"));
        lattitude->setFont(font);

        verticalLayout_2->addWidget(lattitude);

        longitude = new QLabel(horizontalLayoutWidget_4);
        longitude->setObjectName(QStringLiteral("longitude"));
        longitude->setFont(font);

        verticalLayout_2->addWidget(longitude);

        speed = new QLabel(horizontalLayoutWidget_4);
        speed->setObjectName(QStringLiteral("speed"));
        speed->setFont(font);

        verticalLayout_2->addWidget(speed);


        horizontalLayout_4->addLayout(verticalLayout_2);

        MultiBebopClient->setCentralWidget(centralwidget);

        retranslateUi(MultiBebopClient);

        QMetaObject::connectSlotsByName(MultiBebopClient);
    } // setupUi

    void retranslateUi(QMainWindow *MultiBebopClient)
    {
        MultiBebopClient->setWindowTitle(QApplication::translate("MultiBebopClient", "MultiBebopClient", 0));
        start_roscore_button->setText(QApplication::translate("MultiBebopClient", "Start Roscore", 0));
        start_node_button->setText(QApplication::translate("MultiBebopClient", "Start Bebop Node", 0));
        single_control_button->setText(QApplication::translate("MultiBebopClient", "Single Control Mode", 0));
        server_control_button->setText(QApplication::translate("MultiBebopClient", "Server Control Mode", 0));
        label->setText(QString());
        takeoff_button->setText(QApplication::translate("MultiBebopClient", "Takeoff", 0));
        land_button->setText(QApplication::translate("MultiBebopClient", "Land", 0));
        start_button->setText(QApplication::translate("MultiBebopClient", "Start_Mission", 0));
        label_2->setText(QApplication::translate("MultiBebopClient", "Battery state:", 0));
        label_6->setText(QApplication::translate("MultiBebopClient", "Altitude:", 0));
        label_3->setText(QApplication::translate("MultiBebopClient", "Lattitude:", 0));
        label_4->setText(QApplication::translate("MultiBebopClient", "Longitude:", 0));
        label_5->setText(QApplication::translate("MultiBebopClient", "Linear Speed:", 0));
        battery->setText(QApplication::translate("MultiBebopClient", "100%", 0));
        altitude->setText(QApplication::translate("MultiBebopClient", "0m", 0));
        lattitude->setText(QApplication::translate("MultiBebopClient", "37.3458", 0));
        longitude->setText(QApplication::translate("MultiBebopClient", "112.6238", 0));
        speed->setText(QApplication::translate("MultiBebopClient", "0m/s", 0));
    } // retranslateUi

};

namespace Ui {
    class MultiBebopClient: public Ui_MultiBebopClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIBEBOPCLIENT_H
