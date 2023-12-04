    #include <iostream>

    int main(){

        std::string car[] = {"Corola", "Fusca", "Mitisuri"};
        //Só pode conter dados do mesmo tipo
        std::string motorcycle[1];

        motorcycle[0] = "Honda";
        
        std::cout << motorcycle[0] << '\n';

        return 0;
    }