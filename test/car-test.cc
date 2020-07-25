#include "gtest/gtest.h"
#include "src/sim/car-sim.h"

using namespace TrafficSim;

TEST(SimpleVelocity, StartPositionZeroMeters)
{
    CarSim sim(25);

    ASSERT_EQ(0, sim.get_location());
}

TEST(SimpleVelocity, EvaluateTickMovesCar)
{
    CarSim sim(25);

    ASSERT_EQ(25, sim.get_velocity()) << "Initial velocity was incorrect";

    sim.evaluate_tick(1000);
    ASSERT_EQ(25, sim.get_location()) << "Location did not update correctly for a second tick";

    sim.evaluate_tick(500);
    ASSERT_EQ(37.5, sim.get_location()) << "Location did not update correctly for a half-second tick";

    sim.evaluate_tick(10);
    ASSERT_EQ(37.75, sim.get_location()) << "Location did not update correctly for a 1/100th second tick";
}