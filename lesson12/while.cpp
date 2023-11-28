#include <iostream>

int main(){

    std::string name;

    while (name.empty()) {
        std::cout << "Digite um nome: ";
        std::getline(std::cin, name);

        if (name.empty()) {
            std::cout << "O nome nao pode estar vazio. Tente novamente.\n";
        }
    }

    std::cout << "Oi " << name << "!\n";

    while (1==1)
    {
        std::cout << "°-°";
    }


    return 0;
}