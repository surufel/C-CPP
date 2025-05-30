#include <stdio.h>
#include <stdlib.h>

int num1,num2,res,op,op2;

    int main(){
        do{
        /*Implemente um Algoritmo que simule uma calculadora simplificada,
        deverá ser informado dois valores do tipo inteiro. Será impresso o resultado
        de acordo com a operação selecionada.*/

        printf("======================================\n");
        printf("|        CALCULADORA SIMPLES         |\n");
        printf("|------------------------------------|\n");
        printf("|      1- Somar     | 2- Subtrair    |\n");
        printf("|------------------------------------|\n");
        printf("|   3 - Multiplicar |  4 - Dividir   |\n");
        printf("======================================\n");
        printf("Deseja executar qual operação?\n");
        printf("(Aperte 5 para sair)\n");
        scanf("%i",&op);
        printf("Digite o primeiro valor\n");
        scanf("%i",&num1);
        printf("Digite o segundo valor\n");
        scanf("%i",&num2);

        if(op == 1){//Operação de Soma
            res=num1+num2;
        }
        if(op == 2){//Operação de Subtração
            res=num1-num2;
        }
        if(op == 3){//Operação de Multiplicação
            res=num1*num2;
        }
        if(op == 4){//Operação de Divisão
            res=num1/num2;
        }

        
        printf("======================================\n");
        printf("|      O resultado da operação é: %i  |\n", res);
        printf("======================================\n");
        printf("Deseja executar outra operação?\n");
        printf("Digite qualquer número ou 5 para sair: \n");
        scanf("%i",&op2);
        system("cls");
    }while(op2!=5);
}