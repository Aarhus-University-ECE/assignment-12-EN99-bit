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
 
    //Constructors:

    Duration_clock(); //constructor
    
    Duration_clock(int t); //t = value of time in the getDuration function (Constructor)

    //Methods:

    int getDuration_clock(); //function to get time of clock: 
    
    bool tick(); //

    bool tick(int);

    void setAlarm(int);

    bool checkAndUpdateAlarm();

};
#endif