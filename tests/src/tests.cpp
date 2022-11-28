#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../Include/Duration.h"


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 


TEST_CASE("Constructor") //testing constructor
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

REQUIRE (clock.getDuration_clock()==6);


}

TEST_CASE("Alarm") //test alarm
{
Duration_clock clock;

clock.setAlarm(17);

REQUIRE (clock.tick1()==false);
REQUIRE (clock.checkAndUpdateAlarm()==false);
REQUIRE (clock.tick2(18)==true);


}