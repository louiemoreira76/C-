#include <iostream>

int main(){
/*// ponteiros = variável que armazena um endereço de memória de outra variável.
por vezes é mais fácil trabalhar com um endereço
// operador & endereço-de
// * operador de desreferência*/ 

    std::string name = "Luis";
    int age = 19;
    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName;
    std::cout << *pAge;
    std::cout << *pFreePizzas;

    return 0;
}