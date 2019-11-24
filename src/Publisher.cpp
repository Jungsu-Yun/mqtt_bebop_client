#include "Publisher.h"
#include <iostream>

Publisher::Publisher(int argc, char **argv)
{
    init_argc = argc;
    init_argv = argv;

}

Publisher::~Publisher()
{
    if(ros::isStarted())
    {
        ros::shutdown();
        ros::waitForShutdown();
    }
    wait();
}

void Publisher::takeoff_bebop()
{
    ros::init(init_argc, init_argv, "bebop_takeoff");
    ros::NodeHandle nh;
    takeoff = nh.advertise<std_msgs::Empty>("/bebop/takeoff", 1);

    takeoff.publish(empty_msg);
    std::cout << "Take off!" << std::endl;
}

void Publisher::land_bebop()
{
    ros::init(init_argc, init_argv, "bebop_land");
    ros::NodeHandle nh;
    land = nh.advertise<std_msgs::Empty>("/bebop/land", 1);

    land.publish(empty_msg);
    std::cout << "Land!" << std::endl;
}