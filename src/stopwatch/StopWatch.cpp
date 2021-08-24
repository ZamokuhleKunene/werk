#include "StopWatch.h"
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

StopWatch::StopWatch()
{
  
}
double StopWatch::getProcessTime( )//count until zero is returned
{
        clock_t time = clock();
      //  auto tim= static_cast<double>(time)/CLOCKS_PER_SEC;
      //  cout<<tim<<endl;
    auto curr_time =static_cast<double>(time)/CLOCKS_PER_SEC;
    cout<<"The time it takes for the program to execute is : "<<curr_time<<" seconds"<<endl;
    return curr_time;
    
}
void StopWatch::reset()
{
  double curr_time=0;
}

void StopWatch::start(int &on)
{
    auto start= high_resolution_clock::now();//start counting
    on=1;//after it is used the timer is on
}

void StopWatch::stop(int &on)
{
    if(on==1)//it's on then it will stop
    {
        auto stop=high_resolution_clock::now(); //to be called after start has run
    }
    else
        {
            cout<<"Press start"<<endl; // can't stop if it never started
        }    
}

StopWatch::~StopWatch()
{
}

