#include "car-sim.h"

namespace TrafficSim
{
    void CarSim::evaluate_tick(double tickSizeMilliseconds)
    {
        _location += _velocity * (tickSizeMilliseconds / 1000);
    }
} // namespace TrafficSim