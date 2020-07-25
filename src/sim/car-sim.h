namespace TrafficSim
{
    class CarSim
    {
    public:
        CarSim(double initial_velocity);

        double get_velocity()
        {
            return _velocity;
        }
        double get_location()
        {
            return _location;
        }
        void evaluate_tick(double tickSizeMilliseconds);

    private:
        double _velocity = 25;
        double _location = 0;
    };
} // namespace TrafficSim