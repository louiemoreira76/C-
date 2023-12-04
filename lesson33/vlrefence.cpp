#include <iostream>

void swap(std::string x, std::string y);

int main() {
    std::string x = "Value";
    std::string y = "Reference";

    swap(x, y);

    std::cout << "x: " << &x << '\n';
    std::cout << "y: " << &y << '\n';

    return 0;
}

void swap(std::string x, std::string y) {
  std::cout << "x: " << &x << '\n';
    std::cout << "y: " << &y << '\n';   
}