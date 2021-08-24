#ifndef STOPWATCH_H
#define STOPWATCH_H

class StopWatch
{
public:
    StopWatch();
    void reset();//set stopwatch to zero
    double getProcessTime();//show how long it takes for project to execute
    void start(int &on);//start counting
    void stop(int &on); // stop counting
    ~StopWatch();
    
private:
    double curr_time=0;
    int on=0;

};

#endif // STOPWATCH_H
