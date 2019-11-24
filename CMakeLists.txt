cmake_minimum_required(VERSION 2.8.3)
project(mqtt_bebop_client)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(catkin REQUIRED COMPONENTS
  bebop_msgs
  geometry_msgs
  nav_msgs
  roscpp
  image_transport
  cv_bridge
  sensor_msgs
)
find_package(Qt5 COMPONENTS Widgets WebEngineWidgets REQUIRED)
find_package(OpenCV REQUIRED)

catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}_node src/main.cpp src/multibebopclient.cpp src/multibebopclient.h src/multibebopclient.ui
                                    src/Publisher.h src/Publisher.cpp src/Subscriber.h src/Subscriber.cpp)

target_link_libraries(${PROJECT_NAME}_node ${OpenCV_LIBS} ${catkin_LIBRARIES} Qt5::Widgets Qt5::WebEngineWidgets)