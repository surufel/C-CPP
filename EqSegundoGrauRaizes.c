#include <stdio.h>
#include <math.h>

    int main(){

        /*Criar um algoritmo que devolva as raízes da equação de segundo grau*/

        double a;
        double b;
        double c;
        printf("\n Bem vindo ao simulador da equação de segundo grau completa. O algoritmo vai devolver as raízes existentes.");
        printf("\n Para equações de segundo grau incompletas: se b = 0, apenas resolva a equação por x, para obter o resultado.");
        printf("\n Quando 'b' e 'c' = 0, isso significa que as duas raízes resultam em 0. ");

        printf("\n Agora, coloque o valor de A: ");
        scanf("%lf",&a);
        printf("\n Coloque o valor de B: ");
        scanf("%lf",&b);
        printf("\n Por fim, coloque o valor de C: ");
        scanf("%lf",&c);


        double delta = (b*b)-4*a*c;
        if(delta<0){
            printf("\nNão existem raízes reais para a determinada entrada quando Delta for menor que zero.");
            return 0;
        }
        else{
            
        }
        delta = sqrt(delta);
        double x1 = (-b+delta)/(2*a);
        double x2 = (-b-delta)/(2*a);

                    if(x1 != x2){
                    printf("\nExistem duas raízes, sendo elas %.2lf e %.2lf", x1, x2);
                    }
                    else if(x1 = x2){
                    printf("\nSó existe uma única raíz, e ela é: %.2lf", x1);
                    }
                    else{
                    printf("\nInválido.");
                    }

                
                return 0;
        }