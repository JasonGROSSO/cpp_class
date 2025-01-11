#include <iostream>
#include "storage.h"

int main() {

    Storage storage;

    Car car1("Toyota", "Corolla", 2018, 15000.00);
    Car car2("Ford", "Fusion", 2019, 20000.00);
    Car car3("Chevrolet", "Malibu", 2017, 17000.00);
    Car car4("Honda", "Accord", 2016, 14000.00);
    Car car5("Nissan", "Altima", 2015, 13000.00);

    storage.addCar(car1);
    storage.addCar(car2);
    storage.addCar(car3);
    storage.addCar(car4);
    storage.addCar(car5);
    storage.printCars();
    
    return 0;
}