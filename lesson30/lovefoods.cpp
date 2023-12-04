#include <iostream>

int main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Escreva as Top 5 comidas que voce mais gosta #" << i + 1 << ": ";
        std::getline(std::cin, foods[i]);
    }

    std::cout << "Voce gosta dessas comidas:\n";

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}