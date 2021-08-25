#include <iostream>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Bus.cpp"
#include "Truck.cpp"
#include "Garage.cpp"

int main()
{
    Car car1("Jeep Wrangler", "Fiat Chrysler", 100, 4000, 25);
    Car car2("Audi A8", "Audi", 250, 4800, 20);
    std::cout << "Car1 Name: " << car1.getName() << std::endl;
    std::cout << "Car1 Manufacturer: " << car1.getManufacturer() << std::endl;
    std::cout << "Car1 Top Speed: " << car1.getTopSpeed() << std::endl;
    std::cout << "Car1 Weight: " << car1.getWeight() << std::endl;
    std::cout << "Car1 Miles Per Gallon: " << car1.getMilesPerGallon() << std::endl;
    std::cout << "Car1 Spaces: " << car1.getSpaces() << std::endl;
    std::cout << "Car1 get Wheels: " << car1.getWheels() << std::endl;
    std::cout << "Car1 Number of Wheels: " << car1.getNumWheels() << std::endl;
    std::cout << "Car1 Current Gas Amount: " << car1.getCurrentAmountGas() << std::endl;
    std::cout << "Car1 Direction: " << car1.getDirection() << std::endl;
    std::cout << "Car1 Distance Traveled: " << car1.getDistanceTraveled() << std::endl;
    std::cout << "Car1 Garage Position: " << car1.getGaragePositions() << std::endl;
    std::cout << std::endl;

    Motorcycle bike1("Gold Wing", "Honda", 140, 790, 42);
    std::cout << "bike1 Name: " << bike1.getName() << std::endl;
    std::cout << "bike1 Manufacturer: " << bike1.getManufacturer() << std::endl;
    std::cout << "bike1 Top Speed: " << bike1.getTopSpeed() << std::endl;
    std::cout << "bike1 Weight: " << bike1.getWeight() << std::endl;
    std::cout << "bike1 Miles Per Gallon: " << bike1.getMilesPerGallon() << std::endl;
    std::cout << "bike1 Spaces: " << bike1.getSpaces() << std::endl;
    std::cout << "bike1 get Wheels: " << bike1.getWheels() << std::endl;
    std::cout << "bike1 Number of Wheels: " << bike1.getNumWheels() << std::endl;
    std::cout << "bike1 Current Gas Amount: " << bike1.getCurrentAmountGas() << std::endl;
    std::cout << "bike1 Direction: " << bike1.getDirection() << std::endl;
    std::cout << "bike1 Distance Traveled: " << bike1.getDistanceTraveled() << std::endl;
    std::cout << "bike1 Garage Position: " << bike1.getGaragePositions() << std::endl;
    std::cout << std::endl;

    Bus bus1("Type A School Bus", "Collins Bus Corp.", 65, 14500, 10, 72);
    std::cout << "bus1 Name: " << bus1.getName() << std::endl;
    std::cout << "bus1 Manufacturer: " << bus1.getManufacturer() << std::endl;
    std::cout << "bus1 Top Speed: " << bus1.getTopSpeed() << std::endl;
    std::cout << "bus1 Weight: " << bus1.getWeight() << std::endl;
    std::cout << "bus1 Miles Per Gallon: " << bus1.getMilesPerGallon() << std::endl;
    std::cout << "bus1 Number of Seats: " << bus1.getNumSeats() << std::endl;
    std::cout << "bus1 Spaces: " << bus1.getSpaces() << std::endl;
    std::cout << "bus1 get Wheels: " << bus1.getWheels() << std::endl;
    std::cout << "bus1 Number of Wheels: " << bus1.getNumWheels() << std::endl;
    std::cout << "bus1 Current Gas Amount: " << bus1.getCurrentAmountGas() << std::endl;
    std::cout << "bus1 Direction: " << bus1.getDirection() << std::endl;
    std::cout << "bus1 Distance Traveled: " << bus1.getDistanceTraveled() << std::endl;
    std::cout << "bus1 Garage Position: " << bus1.getGaragePositions() << std::endl;
    std::cout << std::endl;

    Truck truck1("F-150", "Ford Motor Company", 130, 4500, 25, 10000);
    Truck truck2("F-350", "Ford Motor Company", 96, 6000, 20, 1500);
    std::cout << "truck1 Name: " << truck1.getName() << std::endl;
    std::cout << "truck1 Manufacturer: " << truck1.getManufacturer() << std::endl;
    std::cout << "truck1 Top Speed: " << truck1.getTopSpeed() << std::endl;
    std::cout << "truck1 Weight: " << truck1.getWeight() << std::endl;
    std::cout << "truck1 Miles Per Gallon: " << truck1.getMilesPerGallon() << std::endl;
    std::cout << "truck1 Spaces: " << truck1.getSpaces() << std::endl;
    std::cout << "truck1 get Wheels: " << truck1.getWheels() << std::endl;
    std::cout << "truck1 Number of Wheels: " << truck1.getNumWheels() << std::endl;
    std::cout << "truck1 Current Gas Amount: " << truck1.getCurrentAmountGas() << std::endl;
    std::cout << "truck1 Direction: " << truck1.getDirection() << std::endl;
    std::cout << "truck1 Distance Traveled: " << truck1.getDistanceTraveled() << std::endl;
    std::cout << "truck1 Garage Position: " << truck1.getGaragePositions() << std::endl;
    std::cout << "truck1 Cargo Capacity: " << truck1.getCargoCapacity() << std::endl;
    std::cout << "truck1 current Weight of Cargo: " << truck1.getHeldCargoWeight() << std::endl;
    std::cout << std::endl;

    
    Garage myGarage(20);
    std::cout << "Garage add vehicle: " << myGarage.addVehicle(car1) << std::endl;
    std::cout << "Garage add vehicle: " << myGarage.addVehicle(car1) << std::endl;
    std::cout << "Garage add vehicle: " << myGarage.addVehicle(car2) << std::endl;
    std::cout << "Garage add vehicle: " << myGarage.addVehicle(car2) << std::endl;
    std::cout << "Garage add vehicle: " << myGarage.addVehicle(truck1) << std::endl;
    std::cout << "Garage add vehicle: " << myGarage.addVehicle(truck1) << std::endl;

    std::cout << "Garage remove vehicle: " << myGarage.removeVehicle(bike1) << std::endl;

    std::cout << "Garage swap vehicle: " << myGarage.swapVehicles(car2, car1) << std::endl;

    std::cout << "Garage isfull: " << myGarage.isFull() << std::endl;
    std::cout << "Garage display: " << std::endl;
    myGarage.display();

}