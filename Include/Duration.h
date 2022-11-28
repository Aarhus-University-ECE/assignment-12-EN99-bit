#ifndef DURATION_H
#define DURATION_H

//CLOCK

class Duration_clock
{
private:

int time; //count the clock

int alarm;

bool alarmHasBeenSet;

public:
    Duration_clock(); //constructor
    

    int getDuration_clock(); //function to get time of clock

    Duration_clock(int t); //t = value of time in the getDuration function (Constructor) 
    
    bool tick1();

    bool tick2(int);

    void setAlarm(int);

    bool Check_And_Update_Alarm();

};
#endif