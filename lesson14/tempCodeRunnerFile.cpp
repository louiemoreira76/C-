#include <iostream>

int main(){
    for(int i = 1; i <= 25; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << '\n';
    }