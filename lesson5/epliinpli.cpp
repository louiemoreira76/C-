#include <iostream>
#include <cmath>

int main() {
    double x = 3.14;
    double y = 4;
    double z;

    z = std::max(x, y);    // Encontrar o máximo entre x e y
    z = std::min(x, y);    // Encontrar o mínimo entre x e y
    z = pow(2, 4);         // Elevar 2 à potência de 4
    z = sqrt(9);           // Calcular a raiz quadrada de 9
    z = fabs(-3);          // Calcular o valor absoluto de -3 (corrigido de abs para fabs)
    z = round(x);          // Arredondar o valor de x para o inteiro mais próximo
    z = ceil(x);           // Arredondar para cima o valor de x para o inteiro mais próximo
    z = floor(x);          // Arredondar para baixo o valor de x para o inteiro mais próximo

    std::cout << z;

    return 0;
}
