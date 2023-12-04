#include <iostream>

class Human{
    public: //publico acessivel
        std::string name;
        std::string occupation = "Dev";
        int age;

    Human(std::string name, std::string occupation, int age){
        this->name = name;
        this->occupation = occupation;
        this->age = age;
    }
};

int main(){

    Human human1("Luis", "Dev", 19);


    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';


    return 0;
}

