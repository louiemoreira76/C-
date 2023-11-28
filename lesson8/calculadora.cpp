#include <iostream>

int main() {
    char op;
    double num1; 
    double num2; 
    double result;

    std::cout << "************ CALCULADORA **************" << '\n';

    std::cout << "Qual cálculo você quer (+, -, *, /)? " << '\n';

    std::cin >> op;

    std::cout << "Digite o número 1: " << '\n';

    std::cin >> num1;

    std::cout << "Digite o número 2: " << '\n';

    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Divisão por zero não é permitida!";
                return 1; // Retorna 1 para indicar um erro
            }
            break;
        default:
            std::cout << "Coloque uma operação válida!";
            return 1; // Retorna 1 para indicar um erro
    }

    std::cout << "O resultado é: " << result << '\n';

    std::cout << "***************************************";
    return 0;
}
