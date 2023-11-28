//Utitil para quando for coocar um evento aleatorio no jogo
#include <iostream>
#include <ctime>
int main(){
    srand(time(0));
    int randNum = rand() % 5 + 1;
    //sem break tem chance de ganhar todos
    switch (randNum)
    {
    case 1: std::cout << "Voce ganhou um PS5! ";
    break;
    case 2: std::cout << "Voce ganhou um PS4! ";
    break;
    case 3: std::cout << "Voce ganhou um PS3! ";
    break;
    case 4: std::cout << "Voce ganhou um PS2! ";
    break;
    case 5: std::cout << "Voce ganhou um PS1! ";
    break;
    }
return 0;
}