/*
Uma função recebe uma lista de strings e
retorna o índice da lista da que possui
mais caracteres.
*/

#include <stdio.h>
#include <string.h>

int maiorString(char palavras[][20], int n){
    int maior = 0;
    for(int i = 1; i < n; i++){
        if(strlen(palavras[i]) > strlen(palavras[maior])){
            maior = i;
        }
    }
    return maior;
}

int main(void){
    char palavras[3][20] = {"acabaxi", "uva", "melancia"};
    int indice = maiorString(palavras, 3);
    printf("Maior string esta no indice: %d\n", indice);
    return 0;
}

// Logo, prova que a alternativa correta é a letra C.