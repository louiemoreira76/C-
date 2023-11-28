#include <iostream>

int main(){
    int month;
    std::cout << "Digite um dos cinco elementos (1-4)"; //ives de usar is e else
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "Opa é terra";
        break;
    case 2:
        std::cout << "Opa é agua";
        break;
    case 3:
        std::cout << "Opa é ar";
        break; 
    case 4:
        std::cout << "Opa é fogo";
        break;
    default:
        std::cout << "Digite um número valido!";
    }

    return 0;
}