#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;
    double price;

public:
    Car(std::string& brand, std::string& model, int year, double price);
    
    std::string getBrand();
    std::string getModel();
    int getYear();
    double getPrice();

    void setBrand(std::string& brand);
    void setModel(std::string& model);
    void setYear(int year);
    void setPrice(double price);

    void printCar(Car& car);
};

Car::Car(std::string& brand,std::string& model, int year, double price) {
    this->brand = brand;
    this->model = model;
    this->year = year;
    this->price = price;
}


std::string Car::getBrand(){
    return brand;
}
std::string Car::getModel(){
    return model;
}
int Car::getYear(){
    return year;
}
double Car::getPrice(){
    return price;
}


void Car::setBrand(std::string& brand) {
    this->brand = brand;
}
void Car::setModel(std::string& model) {
    this->model = model;
}
void Car::setYear(int year) {
    this->year = year;
}
void Car::setPrice(double price) {
    this->price = price;
}


void Car::printCar(Car& car) {
    std::cout << "Brand: " << car.getBrand() << "\n";
    std::cout << "Model: " << car.getModel() << "\n";
    std::cout << "Year: " << car.getYear() << "\n";
    std::cout << "Price: " << car.getPrice() << "\n";
}