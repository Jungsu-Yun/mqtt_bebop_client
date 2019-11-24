#ifndef MULTIBEBOPCLIENT_H
#define MULTIBEBOPCLIENT_H

#include <QMainWindow>
#include "Publisher.h"
#include "Subscriber.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MultiBebopClient; }
QT_END_NAMESPACE

class MultiBebopClient : public QMainWindow
{
    Q_OBJECT
public:
    MultiBebopClient(int argc, char** argv, QWidget *parent = nullptr);
    ~MultiBebopClient();

public slots:
    void receiveFrame(QImage frame);
    void receiveBattery(int battery);
    void receiveAltitude(double altitude);
    void receiveSpeed(float speed);
    void receiveLocation(double latitude, double longitude);

private slots:
    void on_single_control_button_clicked();
    void on_server_control_button_clicked();
    void on_start_roscore_button_clicked();
    void on_start_node_button_clicked();
    void on_takeoff_button_clicked();
    void on_land_button_clicked();
    void on_start_button_clicked();

private:
    Ui::MultiBebopClient *ui;

    Publisher publisher;
    Subscriber subscriber;
    bool isSinglemode;
};
#endif // MULTIBEBOPCLIENT_H
