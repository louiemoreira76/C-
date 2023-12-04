#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void yearold(Car &car, int year);

int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Camaro";
    car2.year = 2023;
    car2.color = "yelow";

    yearold(car1, 2020);

    std::cout << &car1 << '\n';
    printCar(car1);
    return 0;
}

void printCar(Car &car){ //com isso & não criamos uma cópia com outro ponteiro de memoria
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void yearold(Car &car, int year){
    car.year = year;
}