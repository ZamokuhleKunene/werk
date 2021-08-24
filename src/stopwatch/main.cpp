#include<iostream>
#include<ctime>
#include <chrono>
#include "StopWatch.h"

using namespace std;
using namespace std::chrono;

int main()
{   
    int on=0;
    int i=0;
    StopWatch myWatch;
    myWatch.start(on);
    myWatch.stop(on);
    myWatch.getProcessTime();
	return 0;
}
