#ifndef GARAGE_H
#define GARAGE_H
#include <iostream>
#include "Vehicle.hpp" //Garage is not a subclass of Vehicle, therefore we include it here at the top to access 

class Garage
{
    public:
        Garage(size_t capacity = 12);
        bool addVehicle(Vehicle to_add);
        bool removeVehicle(Vehicle to_remove);
        bool swapVehicles(Vehicle swap_in, Vehicle swap_out);
        bool isFull() const;
        void display() const;

    private:
        void arrange();
        Vehicle *arr_;
        size_t capacity_;
        size_t num_vehicles_;
    
};


#endif