#include <iostream>
void walk(int steps);
int main(){

    walk(100);

    return 0;
}
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}
/*recursão = uma técnica de programação em que uma função
---------------------
invoca-se a si própria a partir de dentro
quebrar um conceito complexo num conceito repetível
// (iterativo vs recursivo)
// vantagens = menos código e é mais limpo
útil para ordenação
e algoritmos de busca
// desvantagens = usa mais memória
mais lento
passo único*/