#include <iostream>
/* memória dinâmica = Memória que é atribuída após o programa
é já estar compilado e em execução.
Usa o operador 'new' para alocar
memória no heap em vez de na pilha
Útil quando não sabemos quanta memória
vamos precisar. Torna os nossos programas mais flexíveis,
especialmente quando aceitamos a entrada do utilizador.*/
int main(){
    int *pNum = NULL;

    pNum = new int;

    *pNum = 19;
    
    std::cout << "Address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;

    return 0;
}