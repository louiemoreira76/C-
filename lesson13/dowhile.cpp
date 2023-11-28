#include <iostream>

int main(){
    int number;

    do
    {
       std::cout << "Digite um numero positivo: ";
       std::cin >> number;
    } while (number < 0);
    
    std::cout << "Seu numero: " << number;
    return 0;
}