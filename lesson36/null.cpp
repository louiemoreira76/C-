#include <iostream>

int main(){
                    /*Valor nulo = um valor especial que significa que algo não tem valor.
                     Quando um ponteiro tem um valor nulo,
                    esse ponteiro não está a apontar para nada (null poin
                    nullptr = palavra-chave que representa um literal de ponteiro nulo
                    nullptrs são úteis para determinar se um endereço
                    foi atribuído com sucesso a um ponteiro*/
    int *pointer = nullptr;
    int x = 33;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned";
    }
    else
    {
        std::cout << "address was assigned";
    }
    

    return 0; 
}