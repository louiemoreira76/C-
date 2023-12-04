#include <iostream>

int main(){
   /*endereço de memória = uma localização na memória onde os dados são armazenados
    um endereço de memória pode ser acedido com & (operador de endereço de)*/ 
    std::string name = "Luis";
    int age = 19;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}