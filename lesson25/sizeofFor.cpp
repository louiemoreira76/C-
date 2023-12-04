#include <iostream>

int main() {
    // Exemplo de array de inteiros.
    int numeros[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < sizeof(numeros)/sizeof(int); i++) {
        // Exibe o valor de cada elemento.
        std::cout << "Elemento " << numeros[i] << '\n';
    }

    std::string names[] = {"Luis", "Louie", "Lloris", "Lulu"};

    for(std::string name : names){
        std::cout << name << '\n';
    }

    return 0;
}
