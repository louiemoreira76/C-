    #include <iostream>

    class Animal{
        public: 
            bool alive = true;
        void eat(){
            std::cout << "This animal is eating\n";
        }
    };
    class Dog : public Animal{
        public: 
            void bark(){
                std::cout << "The dog goes woof!\n";
            }
    };
    class Cat : public Animal{
        public:
            void meow(){
                std::cout << "Meeeoooow!";
            }
    };

    int main(){

        Dog dog;
        Cat cat;

        std::cout << dog.alive << '\n';
        dog.eat();
        dog.bark();
        cat.meow();

    return 0;
    }
    /*herança = Uma classe pode receber atributos e métodos de outra classe
    As classes filhas herdam de uma classe pai
    Ajuda a reutilizar código semelhante encontrado em várias classes*/