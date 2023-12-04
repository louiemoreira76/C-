#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main() {
    Day today = sunday;

    switch(today) {
        case sunday:
            std::cout << "Today is Sunday!";
            break;
        
        case monday:
            std::cout << "Today is Monday!";
            break;
        
        case tuesday:
            std::cout << "Today is Tuesday!";
            break;
        
        case wednesday:
            std::cout << "Today is Wednesday!";
            break;
        
        case thursday:
            std::cout << "Today is Thursday!";
            break;
        
        case friday:
            std::cout << "Today is Friday!";
            break;
        
        case saturday:
            std::cout << "Today is Saturday!";
            break;
        
        default:
            std::cout << "Invalid day!";
            break;
    }

    return 0;
}

/*enums = um tipo de dados definido pelo utilizador que consiste
de constantes de números inteiros nomeados emparelhados.
GRANDE se tiver um conjunto de potenciais opções*/