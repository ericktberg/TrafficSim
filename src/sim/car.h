namespace TrafficSim 
{
    class Car 
    {
        public:
            double get_velocity();
            double get_location();
            void evaluate_next_tick(double tickSizeMilliseconds);
    };
}