#include <iostream>

int main(){
    // sizeof = determina o tamanho em bytes de a:
    //variável, tipo de dados, classe, objetos, etc. será util quando for trabalhar com arrays
    
    std::cout << "Tamanho de int: " << sizeof(int) << " bytes\n";
    std::cout << "Tamanho de double: " << sizeof(double) << " bytes\n";
    std::cout << "Tamanho de char: " << sizeof(char) << " bytes\n";
    std::cout << "Tamanho de bool: " << sizeof(bool) << " bytes\n";

    // Exemplo com arrays e sizeof()
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanhoArray = sizeof(numeros) / sizeof(int);

    std::cout << "Número de elementos no array 'numeros': " << tamanhoArray << '\n';

    return 0;
}