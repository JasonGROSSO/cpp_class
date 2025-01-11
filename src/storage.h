#include <iostream>
#include "car.h"

class Node {
public:
    Node() = default;
    Node(Car car);
    void setData(Car car);
    void setNext(Node* next);
    int getCar();
    Node* getNext();
private:
    Car car;
    Node* next;
};

Node::Node(Car car) {
    setData(car);
    setNext(nullptr);
}

void Node::setData(Car car) {
    this->car = car;
}

void Node::setNext(Node* next) {
    this->next = next;
}

Car Node::getCar() {
    return car;
}

Node* Node::getNext() {
    return next;
}

class Storage {
    public:
        Storage();
        void addCar(Car car);
        void removeCar(Car car);
        void printCars();

    private:
        Node* head;
};

Storage::Storage() {
    head = nullptr;
}

void Storage::addCar(Car car) {
    Node* newNode = new Node(car);
    newNode->setNext(head);
    head = newNode;
}

void Storage::removeCar(Car car) {
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr) {
        if (current->getCar() == car) {
            if (previous == nullptr) {
                head = current->getNext();
            } else {
                previous->setNext(current->getNext());
            }
            delete current;
            return;
        }
        previous = current;
        current = current->getNext();
    }
}

void Storage::printCars() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->getCar() << std::endl;
        current = current->getNext();
    }
}