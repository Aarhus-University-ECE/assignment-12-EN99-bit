#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../Include/Duration.h"


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 


TEST_CASE("Constructor")
{
Duration_clock clock; //case for when clock is zero
Duration_clock clock1(5); //When creating "new clocks" for testting, no same name
Duration_clock clock2(50);


REQUIRE (clock.getDuration_clock()==0);
REQUIRE (clock1.getDuration_clock()==5);
REQUIRE (clock2.getDuration_clock()==50);

}

TEST_CASE("tick1")
{

Duration_clock clock; //create test clock
clock.tick1();

REQUIRE (clock.getDuration_clock()==1);


clock.tick2(5);
clock.tick2(-1);


REQUIRE (clock.getDuration_clock()==6);
REQUIRE (clock.getDuration_clock()==false);

}

TEST_CASE("setAlarm")
{
Duration_clock clock;
Duration_clock clock1;

clock.setAlarm(2);
clock1.setAlarm(5);





}