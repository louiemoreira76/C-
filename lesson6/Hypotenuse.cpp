#include <iostream>
#include <cmath>
//hypotenusa
int main() {
    double a;
    double b;
    double c;

    std::cout << "Digite o A: ";
    std::cin >> a;
    std::cout << "Digite o B: ";
    std::cin >> b;

    //a = pow(a, 2);
    //b = pow(b, 2);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "O Resultado foi: " << '\n' << c;

    return 0;
}
