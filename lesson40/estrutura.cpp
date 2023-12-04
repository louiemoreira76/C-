#include <iostream>

struct student{
    std::string name;
    double average;
    bool enrolled;
};

int main(){
    student student1;
    student1.name = "Luis";
    student1.average = 9.8;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.average << '\n';
    std::cout << student1.enrolled << '\n';
}