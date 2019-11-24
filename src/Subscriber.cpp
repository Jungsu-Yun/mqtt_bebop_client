#include "Subscriber.h"

std::string cam_image_topic;
std::string battery_topic;
std::string altitude_topic;
std::string speed_topic;
std::string loc_topic;

Subscriber::Subscriber(int argc, char **argv)
{
    init_argc = argc;
    init_argv = argv;

    cam_image_topic = "/image_raw";
    battery_topic = "/bebop/states/common/CommonState/BatteryStateChanged";
    altitude_topic = "bebop/states/ardrone3/PilotingState/AltitudeChanged";
    speed_topic = "bebop/states/ardrone3/PilotingState/SpeedChanged";
    loc_topic = "bebop/states/ardrone3/PilotingState/PositionChanged";
}

Subscriber::~Subscriber()
{
    if(ros::isStarted())
    {
        ros::shutdown();
        ros::waitForShutdown();
    }
    wait();
}

bool Subscriber::init()
{
    ros::init(init_argc, init_argv, "Subsribe_node");

    ros::NodeHandle nh;

    image_transport::ImageTransport it(nh);
    imgSub = it.subscribe(cam_image_topic, 1, &Subscriber::imageCallback, this);
    batterySub = nh.subscribe(battery_topic, 1, &Subscriber::batteryCallback, this);
    altitudeSub = nh.subscribe(altitude_topic, 1, &Subscriber::altitudeCallback, this);
    speedSub = nh.subscribe(speed_topic, 1, &Subscriber::speedCallback, this);
    locationSub = nh.subscribe(loc_topic, 1, &Subscriber::locationCallback, this);

    start();

    return true;
}

void Subscriber::run()
{
    ros::NodeHandle nh;

    image_transport::ImageTransport it(nh);
    imgSub = it.subscribe(cam_image_topic, 1, &Subscriber::imageCallback, this);
    batterySub = nh.subscribe(battery_topic, 1, &Subscriber::batteryCallback, this);
    altitudeSub = nh.subscribe(altitude_topic, 1, &Subscriber::altitudeCallback, this);
    speedSub = nh.subscribe(speed_topic, 1, &Subscriber::speedCallback, this);
    locationSub = nh.subscribe(loc_topic, 1, &Subscriber::locationCallback, this);

    ros::spin();
}

void Subscriber::imageCallback(const sensor_msgs::ImageConstPtr &msg)
{
    try
    {
        cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvShare(msg, "rgb8");
        frameOriginal = cv_ptr->image;
    }
    catch(cv_bridge::Exception& e)
    {
        QMessageBox box;
        box.setText("ImageView.callback_image() while trying to convert image");
        box.exec();
    }

    QImage frame(frameOriginal.data, frameOriginal.cols, frameOriginal.rows, frameOriginal.step[0], QImage::Format_RGB888);

    emit sendFrame(frame);
}

void Subscriber::batteryCallback(const bebop_msgs::CommonCommonStateBatteryStateChanged::ConstPtr &msg)
{
    int battery = msg->percent;

    emit sendBattery(battery);
}

void Subscriber::altitudeCallback(const bebop_msgs::Ardrone3PilotingStateAltitudeChangedConstPtr &msg)
{
    double altitude = msg->altitude;

    emit sendAltitude(altitude);
}

void Subscriber::speedCallback(const bebop_msgs::Ardrone3PilotingStateSpeedChangedConstPtr &msg)
{
    float speed = msg->speedX;

    emit sendSpeed(speed);
}

void Subscriber::locationCallback(const bebop_msgs::Ardrone3PilotingStatePositionChangedConstPtr &msg)
{
    double latitude = msg->latitude;
    double longitude = msg->longitude;

    emit sendLocation(latitude, longitude);
}
