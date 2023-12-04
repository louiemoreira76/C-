#include <iostream>

int main(){
    const int size = 99;
    std::string foods[size];

    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3)*2, "hamburger");
    fill(foods + (size/3)*2, foods + size, "Hot Dog");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}