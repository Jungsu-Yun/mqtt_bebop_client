#ifndef MQTT_BEBOP_CLIENT_PUBLISHER_H
#define MQTT_BEBOP_CLIENT_PUBLISHER_H

#include <ros/ros.h>
#include <std_msgs/Empty.h>

class Publisher
{
private:
    int init_argc;
    char** init_argv;

    ros::Publisher takeoff;
    ros::Publisher land;
    std_msgs::Empty empty_msg;

public:
    Publisher(int argc, char** argv);
    ~Publisher();
    void takeoff_bebop();
    void land_bebop();
};


#endif //MQTT_BEBOP_CLIENT_PUBLISHER_H
