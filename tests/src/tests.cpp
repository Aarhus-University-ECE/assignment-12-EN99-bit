#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../Include/Duration.h"


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 


TEST_CASE("Duration")
{
Duration_clock clock;
Duration_clock clock1;
Duration_clock clock2;


REQUIRE (clock.getDuration_clock()==0);
REQUIRE (clock1.getDuration_clock()==5);
REQUIRE (clock2.getDuration_clock()==50);



}