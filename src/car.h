#include <iostream>
#include <string>

class Car {
public:
    Car() = default;
    Car(std::string brand, std::string model, int year, double price);
    void setBrand(std::string make);
    void setModel(std::string model);
    void setYear(int year);
    void setPrice(double price);
private:
    std::string brand;
    std::string model;
    int year;
    double price;
};

Car::Car(std::string brand, std::string model, int year, double price) {
    setBrand(brand);
    setModel(model);
    setYear(year);
    setPrice(price);
}

void Car::setBrand(std::string brand) {
    this->brand = brand;
}
void Car::setModel(std::string model) {
    this->model = model;
}
void Car::setYear(int year) {
    this->year = year;
}
void Car::setPrice(double price) {
    this->price = price;
}
