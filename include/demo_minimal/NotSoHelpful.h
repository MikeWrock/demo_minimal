#ifndef DEM_MINIMAL_H_
#define DEM_MINIMAL_H_

#include <vector>
#include "ros/ros.h"
#include "std_srvs/Trigger.h"

namespace demo_minimal {

class NotSoHelpful 
{
public:
    NotSoHelpful(ros::NodeHandle& nh);
    ~NotSoHelpful();
    void run();
    bool resetCB(std_srvs::Trigger::Request &req, std_srvs::Trigger::Response &res);

private:
    std::vector<float> boom_;
};

} 

#endif 
