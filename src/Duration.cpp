//CLOCK
#include "Duration.h"
#include <stdio.h>
#include <assert.h>

//a)

int Duration_clock::getDuration_clock() //function to get time and constructor
{
    return time;//
}

//b)

Duration_clock::Duration_clock() //Constructor to set time = 0. 
{
    time = 0; //When i call Duration clock in tests, i create a clock with tiem = 0
    alarmHasBeenSet = false;
}

//c)
Duration_clock::Duration_clock(int t)
{
    assert(t>=0);
    time = t;
}

//e

bool Duration_clock::tick1()
{
time++;
return checkAndUpdateAlarm();
}

//f)

bool Duration_clock::tick2(int q)
{
    assert(q>0);
    time += q;
    return checkAndUpdateAlarm();
}

//i
bool Duration_clock::checkAndUpdateAlarm()
{
    if (time>alarm)
    {
        alarm = 0;
        alarmHasBeenSet = true;
        return true;
    }
    else
    {
        return false;
    }
    
}

//g

void Duration_clock::setAlarm(int t) //function to set alarm
{
assert(t>time); //Dont set alarm as the same as what the time is, dumbass

alarm = t; //Set value of alarm

alarmHasBeenSet = true; 
}

