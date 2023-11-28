#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int y = 2;
}

int main(){
    using namespace first;

    std::cout << x;
    //std::cout << second::x; para vc declarar aqui int x = 0;
    return 0;
}