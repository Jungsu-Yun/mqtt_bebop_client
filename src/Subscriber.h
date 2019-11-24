#ifndef MQTT_BEBOP_CLIENT_SUBSCRIBER_H
#define MQTT_BEBOP_CLIENT_SUBSCRIBER_H

#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv-3.3.1-dev/opencv2/highgui/highgui.hpp>
#include <bebop_msgs/CommonCommonStateBatteryStateChanged.h>
#include <bebop_msgs/Ardrone3PilotingStateAltitudeChanged.h>
#include <bebop_msgs/Ardrone3PilotingStateSpeedChanged.h>
#include <bebop_msgs/Ardrone3PilotingStatePositionChanged.h>

#include <QThread>
#include <QImage>
#include <QMessageBox>

#include <iostream>

class Subscriber : public QThread
{
    Q_OBJECT
private:
    int init_argc;
    char** init_argv;

    image_transport::Subscriber imgSub;
    ros::Subscriber batterySub;
    ros::Subscriber speedSub;
    ros::Subscriber locationSub;
    ros::Subscriber altitudeSub;

    cv::Mat frameOriginal;

public:
    Subscriber(int argc, char** argv);
    ~Subscriber();
    bool init();
    void run();

    void imageCallback(const sensor_msgs::ImageConstPtr& msg);
    void batteryCallback(const bebop_msgs::CommonCommonStateBatteryStateChanged::ConstPtr& msg);
    void altitudeCallback(const bebop_msgs::Ardrone3PilotingStateAltitudeChangedConstPtr& msg);
    void speedCallback(const bebop_msgs::Ardrone3PilotingStateSpeedChangedConstPtr& msg);
    void locationCallback(const bebop_msgs::Ardrone3PilotingStatePositionChangedConstPtr& msg);

signals:
    void sendFrame(QImage frame);
    void sendBattery(int battery);
    void sendAltitude(double altitude);
    void sendSpeed(float speed);
    void sendLocation(double latitude, double longitude);
};


#endif //MQTT_BEBOP_CLIENT_SUBSCRIBER_H
