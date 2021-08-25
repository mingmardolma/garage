#ifndef CAR_H
#define CAR_H
#include "Vehicle.hpp"
#include <iostream>
#include <string>

class Car : public Vehicle
{   
    public:
        Car(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);
};
#endif