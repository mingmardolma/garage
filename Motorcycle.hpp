#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <iostream>
#include "Vehicle.hpp"

class Motorcycle : public Vehicle
{
    public:
        Motorcycle(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);
};

#endif