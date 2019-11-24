#include "multibebopclient.h"
#include "./ui_multibebopclient.h"
#include <iostream>
#include <QMessageBox>

MultiBebopClient::MultiBebopClient(int argc, char** argv, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MultiBebopClient)
    , publisher(argc, argv)
    , subscriber(argc, argv)
{
    isSinglemode = false;
    ui->setupUi(this);
    ui->webviewWidget->load(QUrl("file:///home/jungsu/catkin_ws/src/mqtt_bebop_client/src/map/map.html"));
    connect(&subscriber, SIGNAL(sendFrame(QImage)), this, SLOT(receiveFrame(QImage)));
    connect(&subscriber, SIGNAL(sendBattery(int)), this, SLOT(receiveBattery(int)));
    connect(&subscriber, SIGNAL(sendAltitude(double)), this, SLOT(receiveAltitude(double)));
    connect(&subscriber, SIGNAL(sendSpeed(float)), this, SLOT(receiveSpeed(float)));
    connect(&subscriber, SIGNAL(sendLocation(double, double)), this, SLOT(receiveLocation(double, double)));
}

MultiBebopClient::~MultiBebopClient()
{
    delete ui;
    system("rosnode kill /bebop/bebop_driver");
    system("killall roscore");
}
void MultiBebopClient::on_single_control_button_clicked()
{
    isSinglemode = true;
    ui->webviewWidget->page()->runJavaScript("start()");
}

void MultiBebopClient::on_server_control_button_clicked()
{
    isSinglemode = false;
    ui->webviewWidget->load(QUrl("file:///home/jungsu/catkin_ws/src/mqtt_bebop_client/src/map/map.html"));

    QMessageBox box;
    box.setText("원격모드에서는 다른 기능을 사용할 수 없습니다.");
    box.exec();
}

void MultiBebopClient::on_start_roscore_button_clicked()
{
    system("roscore &");

    subscriber.init();
}

void MultiBebopClient::on_start_node_button_clicked()
{
    system("chmod +x ~/catkin_ws/src/mqtt_bebop_client/src/script/connectbebop.sh");
    system("~/catkin_ws/src/mqtt_bebop_client/src/script/connectbebop.sh &");
}

void MultiBebopClient::on_takeoff_button_clicked()
{
    if(isSinglemode == true)
        publisher.takeoff_bebop();
    else
    {
        QMessageBox box;
        box.setText("원격 모드에서는 사용할 수 없습니다.");
        box.exec();
    }
}

void MultiBebopClient::on_land_button_clicked()
{
    if(isSinglemode == true)
        publisher.land_bebop();
    else
    {
        QMessageBox box;
        box.setText("원격 모드에서는 사용할 수 없습니다.");
        box.exec();
    }
}

void MultiBebopClient::on_start_button_clicked()
{
    if(isSinglemode == true)
        std::cout << "Start Mission!" << std::endl;
    else
    {
        QMessageBox box;
        box.setText("원격 모드에서는 사용할 수 없습니다.");
        box.exec();
    }
}

void MultiBebopClient::receiveFrame(QImage frame)
{
    ui->label->setPixmap(QPixmap::fromImage(frame));
}

void MultiBebopClient::receiveBattery(int battery)
{
    QString battery_str = QString::number(battery);
    QString unit = " %";
    ui->battery->setText(QString("%1%2").arg(battery_str).arg(unit));
}

void MultiBebopClient::receiveAltitude(double altitude)
{
    QString Altitude = QString::number(altitude, 'g', 1);
    QString unit = " m";
    ui->altitude->setText(QString("%1%2").arg(Altitude).arg(unit));
}

void MultiBebopClient::receiveSpeed(float speed)
{
    QString Speed = QString::number(speed, 'f', 1);
    QString unit = " m/s";
    ui->speed->setText(QString("%1%2").arg(Speed).arg(unit));
}

void MultiBebopClient::receiveLocation(double latitude, double longitude)
{
    QString Latitude = QString::number(latitude, 'g', 9);
    QString Longitude = QString::number(longitude, 'g', 9);

    ui->lattitude->setText(Latitude);
    ui->longitude->setText(Longitude);
}