#include <iostream>

int main(){
    int num;
    int adivinho;
    int tentativas = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********* ADIVINHACAO DE NUMERO *************" << '\n';

    do
    {
        std::cout << "Qual o numero (1-100)?" << '\n';
        std::cin >> adivinho;
      

        if (adivinho > num)
        {
            std::cout << "Chute Alto!";
              tentativas+=1;
        }
        else if (adivinho < num){
            std::cout << "Chute Baixo!";
              tentativas+=1;
        }
        else{
            std::cout << "Correto! Numeros de tentativas: " << tentativas << '\n';
        }
    } while (adivinho != num);
    
        std::cout << "*****************************************" << '\n';
    return 0;
}