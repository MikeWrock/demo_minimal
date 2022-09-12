#include "demo_minimal/NotSoHelpful.h"
#include "std_srvs/Trigger.h"

using namespace demo_minimal;

NotSoHelpful::NotSoHelpful(ros::NodeHandle& nh) 
{
}

NotSoHelpful::~NotSoHelpful() 
{
}
bool NotSoHelpful::resetCB(std_srvs::Trigger::Request &req, std_srvs::Trigger::Response &res){
    if(boom_.size()) boom_.clear();
    return true;
}

void NotSoHelpful::run() 
{   
    std_srvs::Trigger::Request a;
    std_srvs::Trigger::Response b;
    resetCB(a, b);
}