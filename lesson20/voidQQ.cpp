    #include <iostream>

    double gata(double tamanho);
    double rato(double tamanhO);

    int main(){
        double tamanho = 5.0;
        double cachorro = gata(tamanho);
        double pombo = rato(tamanho);

        std::cout << cachorro << pombo;
        return 0;
    }

    double gata(double tamanho){
    return tamanho * tamanho;// se estivermos retornando um void para a palavra chave double
    }

    double rato(double tamanhO){
        return tamanhO * tamanhO + tamanhO;
    }