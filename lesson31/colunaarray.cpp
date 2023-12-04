#include <iostream>

int main(){
    std::string names[][3] =  {{"Lerroy", "Luis", "Lydia"},
                              {"Loris", "Larissa", "Linus"},
                              {"Lãopiao", "L" "£l"}};

    int rows = sizeof(names)/sizeof(names[0]);
    int columns = sizeof(names[0])/sizeof(names[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << names[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::cout << names[0][0] << "";
    return 0;
}