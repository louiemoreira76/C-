#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();

    std::cout << "Sua escolha: ";
    showChoice(player);

    computer = getComputerChoice();

    std::cout << "Escolha do Fulano: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char jogador;
    std::cout << "************************************\n";
    std::cout << "Jogar Pedra, Papel, Tesoura The Game!\n";
    do
    {
    std::cout << "************************************\n";
    std::cout << " 'r' para Pedra\n";
    std::cout << " 'p' para Papel\n";
    std::cout << " 's' para Tesoura\n";
    std::cin >> jogador;
    } while (jogador != 'r' && jogador != 'p' && jogador != 's');
    
    return jogador;
}
char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
    switch (choice)
    {
    case 'r': std::cout << "ROCK\n";
        break;
    case 'p': std::cout << "PAPER\n";
        break;
    case 's': std::cout << "Scissors\n";
    break; 
    default:
       std::cout << "Ai estrapolou na gireba";
    }
}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r': if(computer == 'r'){std::cout << "Um empate!\n";}
    else if(computer == 'p'){std::cout << "Perdedor UUUUUUU\n";}
    else{std::cout << "Campeao AAAEEEEE!!!!!\n";}
        break;

    case 'p': if(computer == 'p'){std::cout << "Um empate!\n";}
    else if(computer == 's'){std::cout << "Perdedor UUUUUUU\n";}
    else{std::cout << "Campeao AAAEEEEE!!!!!\n";}
        break;
    
    case 's': if(computer == 's'){std::cout << "Um empate!\n";}
    else if(computer == 'r'){std::cout << "Perdedor UUUUUUU\n";}
    else{std::cout << "Campeao AAAEEEEE!!!!!\n";}
        break;
    }
}