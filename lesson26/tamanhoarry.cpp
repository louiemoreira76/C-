#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {39.56, 193.42, 32.56, 0.99}; 
    //função precisa saber o tamanho do array
    int size = sizeof(prices)/sizeof(prices[0]);
    
    double total = getTotal(prices, size);
    std::cout << "R$" << total;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}