#include <iostream>

int main(){
    int number = 9;

    number % 2 == 1 ? std::cout << "ODD " : std::cout << "EVEN ";

    bool alone = true;
    std::cout << (alone ? "You are alone" : "you remain alone");

    return 0;
}