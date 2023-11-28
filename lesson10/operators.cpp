#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (numero >= 10 && numero <= 20) {
        std::cout << "O numero esta no intervalo de 10 a 20 (inclusive)." << std::endl;
    } else if (numero < 10 || numero > 20) {
        std::cout << "O numero esta fora do intervalo de 10 a 20." << std::endl;
    }

    if (!(numero == 15)) {
        std::cout << "O numero nao e igual a 15." << std::endl;
    }

    return 0;
}
