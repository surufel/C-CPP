#include <iostream>

void sort(int array[], int tamanho);

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = sizeof(array)/sizeof(array[0]); // o tamanho é o tamanho do array dividido por um dos elementos (40/4 bytes = 10 bytes)

    sort(array, tamanho);

    for(int elementos : array){ //foreach loop -> é um loop que facilita a traversão de conjunto de dados iteráveis (como array) 
        std::cout << elementos << " ";
    }

    return 0;
}

void sort(int array[], int tamanho){
    int temp;
    for(int i = 0; i < tamanho - 1; i++){ // tamanho-1 pq não precisamos comparar o ultimo elemento com nada, os elementos mais largos vão para o fim da array
        for(int j = 0; j < tamanho -1; j++){
            if(array[j] < array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            }
        }
    } 
}