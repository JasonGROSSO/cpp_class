#include <iostream>
#include "storage.h"

void displayMenu() {
    std::cout << "Car Storage System Menu:\n";
    std::cout << "1. Add Car\n";
    std::cout << "2. Retrieve Car\n";
    std::cout << "3. Update Car\n";
    std::cout << "4. Remove Car\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Storage storage;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string make, model;
                int year;
                double price;
                std::cout << "Enter make: ";
                std::cin >> make;
                std::cout << "Enter model: ";
                std::cin >> model;
                std::cout << "Enter year: ";
                std::cin >> year;
                std::cout << "Enter price: ";
                std::cin >> price;
                storage.addCar(Car(make, model, year, price));
                break;
            }
            case 2: {
                int index;
                std::cout << "Enter car index to retrieve: ";
                std::cin >> index;
                Car* car = storage.getCar(index);
                if (car != nullptr) {
                    std::cout << "Car found: \n";
                    printCar(*car);
                } else {
                    std::cout << "Car not found.\n";
                }

                break;
            }
            case 3: {
                int index;
                std::cout << "Enter car index to update: ";
                std::cin >> index;
                std::string brand, model;
                int year;
                double price;
                std::cout << "Enter new make: ";
                std::cin >> brand;
                std::cout << "Enter new model: ";
                std::cin >> model;
                std::cout << "Enter new year: ";
                std::cin >> year;
                std::cout << "Enter new price: ";
                std::cin >> price;
                storage.updateCar(index, Car(brand, model, year, price));
                break;
            }
            case 4: {
                int index;
                std::cout << "Enter car index to remove: ";
                std::cin >> index;
                storage.removeCar(index);
                break;
            }
            case 5:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}