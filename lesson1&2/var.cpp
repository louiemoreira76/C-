#include <iostream>

int main(){
    int y = -200;

    int x; //declaração
    x = 100; //atribuição

    double dinheiro = 543.57;

    int sum = dinheiro + x + y;

    char Inicial = 'L'; //um caractere

    bool bad = false;
    //string  objeto de sequencia de texto
    std::string name = "Luis Moreira"; //only ""

    const double pi = 3.14159; //para valores que vc não que r que mude pi = 0 exemplo

    std::cout << x << '\n' << y << '\n' << dinheiro << '\n' <<sum;
    std::cout << '\n' << bad << '\n' << name;
    return 0;
}