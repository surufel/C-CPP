#include <stdio.h>
#include <stdlib.h>

// Integrando pro CriarBiblioteca.c 
int num,ValorCubo;

void CalcularValorCubo(){
    ValorCubo = num*num*num;
    printf("O valor do Cubo e: %i\n",ValorCubo);
    return 0;
}