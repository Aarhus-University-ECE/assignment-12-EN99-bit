//CLOCK
#include "Duration.h"
#include <stdio.h>
#include <assert.h>

//a)

int Duration_clock::getDuration_clock() //function to get time
{
    return time;//
}

//b)

Duration_clock::Duration_clock() //Constructor to set time = 0. 
{
    time = 0; //When i call Duration clock in tests, i create a clock with tiem = 0
}

//c)
Duration_clock::Duration_clock(int t)
{
    assert(t>=0);
    time = t;
}

//f)

/*int Duration::tick(int q){
    assert(q<0);
    time = time + q;
}
*/

Duration_clock::~Duration_clock() //destructor
{

}

