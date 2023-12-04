#include <iostream>

class Stove{
    private:
        int temperature = 0;

    public:
        int getTemperature(){
            return temperature;
        }
    void setTemperature(int temperature){
        if(temperature <= 0){
            std::cout << "Is to cold!";
        }
        this->temperature = temperature;
    }
};

int main(){
    Stove stove;

    stove.setTemperature(-1);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}