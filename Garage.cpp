#include "Garage.hpp"
#include "Vehicle.hpp"
#include "cmath"

namespace null
{
    Vehicle v;
}
void Garage::arrange()
{
    int counter = 0;
    Vehicle *temp_array = new Vehicle[capacity_];
    for (int i = 0; i < capacity_; i++) {
        temp_array[i] = null::v;
    }
    
    for (int i = 0; i < capacity_; i++) {
        if (arr_[i] != null::v) {
            temp_array[counter] = arr_[i];
            counter++;
        }
    }
    delete[] arr_;
    arr_ = temp_array;
}
Garage::Garage(size_t capacity)
{
    capacity_ = capacity;
    arr_ = new Vehicle[capacity_];
    num_vehicles_ = 0;

}
bool Garage::addVehicle(Vehicle to_add)
{
    if(isFull())
        return false;
    else if((num_vehicles_ + to_add.getSpaces()) > capacity_)
        return false;
    else
    {
        for(int i = num_vehicles_; i <= num_vehicles_ + to_add.getSpaces(); i++)
        {
            arr_[i] = to_add;
        }
        num_vehicles_ += to_add.getSpaces();
        return true;
    }
}
bool Garage::removeVehicle(Vehicle to_remove)
{
    for(int i = 0; i < num_vehicles_; i++)
    {
        if(arr_[i] == to_remove)
        {
            arr_[i] = null::v;
            num_vehicles_--;
            arrange();
            return true;
        }
    }
    return false;
}

bool Garage::swapVehicles(Vehicle swap_in, Vehicle swap_out)
{
    for(int i = 0; i <= num_vehicles_ ; i++)
    {
        if(arr_[i] == swap_out)
        {
            arr_[i] = swap_in;
        }
    }
    return true;
}
bool Garage::isFull() const
{
    if(num_vehicles_ == capacity_)
        return true;
    return false;
}
void Garage::display() const
{
    for(int i = 0; i <= num_vehicles_; i++)
    {
        if(arr_[i] != arr_[i-1])
            std::cout << arr_[i].getName() << " " << arr_[i].getManufacturer() << std::endl;
    }
}
