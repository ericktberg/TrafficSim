#include "car-sim.h"

namespace TrafficSim
{
    CarSim::CarSim(double initial_velocity) {
        _velocity = initial_velocity;
    }

    void CarSim::evaluate_tick(double tickSizeMilliseconds)
    {
        _location += _velocity * (tickSizeMilliseconds / 1000);
    }
} // namespace TrafficSim