#include <iostream>

void Oi(std::string name);

int main(){
    std::string name = "Luis";
    Oi(name);
    return 0;
}

void Oi(std::string nome){
    std::cout << "Ola Tudo bem com voce " << nome;
}