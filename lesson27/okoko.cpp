        #include <iostream>

        int searchaArray(char array[], int size, int element);

        int main(){

            char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'L'};
            int size = sizeof(letras)/sizeof(letras[0]);
            int index;
            char myNum;

            std::cout << "Digitr a letra que voce quer procurar: "<< '\n';
            std::cin >> myNum;

            index = searchaArray(letras, size, myNum);

            if(index != -1){
                std::cout << myNum << " is at index " << index;
            }
            else{
                std::cout << myNum << " Is not in the array";
            }

            return 0;
        }

        int searchaArray(char array[], int size, int element){

            for(int i = 0; i < size; i++){
                if(array[i] == element){
                    return i;
                }
            }
            return -1; //aldo não foi achado
        }