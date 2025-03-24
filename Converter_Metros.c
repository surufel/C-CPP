#include <stdio.h>
#include <math.h>

int main(){
    
    /* Fazer um programa em C 
    que pergunta um valor em metros
    e imprime o correspondente em 
    decímetros, centímetros e milímetros.c */


    double metro;
    printf("Digite uma medida em metros: ");
    scanf("%lf", &metro);

    double decimetro = metro*10;
    double centimetro = metro*100;
    double milimetro = metro*1000;
    
    printf("\nSua medida em decímetros: %.2lf", decimetro);
    printf("\nSua medida em centímetros: %.2lf", centimetro);
    printf("\nSua medida em milímetros: %.2lf", milimetro);
    
    return 0;
    
    }