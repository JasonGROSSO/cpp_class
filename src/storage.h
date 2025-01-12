#include <iostream>
#include "car.h"

#define SIZE_N 100

class Storage {
private:
    Car storage[SIZE_N];
    int size;
    int count;

public:
    Storage();

    bool addCar(Car& car);
    Car* getCar(int index);
    bool updateCar(int index, Car& car);
    bool removeCar(int index);
    bool printAllCars();
    int getSize();
};

bool Storage::addCar(Car& car) {
    if (size < SIZE_N) {
        storage[size++] = car;
        return true;
    }
    return false;
}

Car* Storage::getCar(int index) {
    if (index >= 0 && index < size) {
        return &storage[index];
    }
    return nullptr;
}

bool Storage::updateCar(int index, Car& car) {
    if (index >= 0 && index < size) {
        storage[index] = car;
        return true;
    }
    return false;
}

bool Storage::removeCar(int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; ++i) {
            storage[i] = storage[i + 1];
        }
        --size;
        return true;
    }
    return false;
}

int Storage::getSize(){
    return size;
}
