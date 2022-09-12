#include <memory>
#include "ros/ros.h"
#include "demo_minimal/NotSoHelpful.h"
using namespace demo_minimal;
using namespace std;

int main(int argc, char **argv) {
    ros::init(argc, argv, "minimal_demo_node");
    ros::NodeHandle nh;

    ROS_INFO("Starting Node");
    
    shared_ptr<NotSoHelpful> unhelpful_ptr = make_shared<NotSoHelpful>(nh);

    unhelpful_ptr->run();

    ROS_INFO("Exiting Node");

    return 0;
}