#include <stdio.h>
#include <ctype.h>

    int main(){

        char unidadebase;
        double temperatura;
        double unidadeconvertida;

        printf("\nQual é a unidade utilizada? (C ou F): ");
        scanf("%c", &unidadebase);
        unidadebase = toupper(unidadebase);
        
        if (unidadebase == 'C'){
            printf("\nUnidade selecionada: Celsius");
            printf("\nQual é a quantidade, em graus, a ser convertida?: ");
            scanf("\n%lf", temperatura);
            unidadeconvertida = (1,8*temperatura) + 32;
            printf("\nA sua temperatura, em Fahrenheint, é de: %.2lf.", unidadeconvertida);
        }
            else if (unidadebase == 'F'){
                printf("\nUnidade selecionada: Fahrenheint");
                printf("\nQual é a quantidade, em graus, a ser convertida?: ");
                scanf("\n%lf", temperatura);
                unidadeconvertida = (temperatura/1,8) - 32;
                printf("\nA sua temperatura, em Celsius, é de: %.2lf.", unidadeconvertida);
            }
                else{
                    printf("\nUnidade inválida.");
                }
                return 0;
        }