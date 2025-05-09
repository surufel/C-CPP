#include <stdio.h>
#include <stdlib.h>
#include "Cubo.h"

// Ligado ao Cubo.h

int op;

int main(){
    do{
        CalcularValorCubo();
        printf("Informe qualquer caractere ou zero para sair!\n");
        scanf("%i",&op);
    }while(op!=0);
    return 0;
}