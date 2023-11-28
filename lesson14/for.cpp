#include <iostream>

int main(){
    for(int i = 1; i <= 25; i++){
        if(i == 13){
            continue;
        };
        if (i == 21)
        {
            break;
        };
        std::cout << i << '\n';
    }
     std::cout << "I ok :( ";
    return 0;
}