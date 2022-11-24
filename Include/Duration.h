#ifndef DURATION_H
#define DURATION_H

//CLOCK

class Duration_clock
{
private:

int time; //count the clock

public:
    Duration_clock(); //constructor
    ~Duration_clock(); //destructor

    int getDuration_clock(); //function to get duration

    Duration_clock(int t); //t = value of time in the getDuration function (Constructor) 
    

    int tick(int);

};
#endif