#include <iostream>

class Human{
    public: //publico acessivel
        std::string name;
        std::string occupation = "Dev";
        int age;
    //objetos
    void eat(){
        std::cout << "This guy eat pizza\n";
    }
    void drink(){
        std::cout << "This guy drink juice\n";
    }
    void sleep(){
        std::cout << "This guy sleep in 21:00\n";
    }
};

int main(){

    Human human1;

    human1.name = "Luis";
    human1.occupation = "Dev";
    human1.age = 19;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}

