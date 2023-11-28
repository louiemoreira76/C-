#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef int number_t;
using text_t = std::string;

int main(){

    text_t nome = "Luis";

    number_t idade = 19;

    std::cout << nome << '\n';
    std::cout << idade;

    return 0;
}