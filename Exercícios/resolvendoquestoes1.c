#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Fazer um programa em "C" que solicite 2 números e informe:
a) A soma dos números;
b) O produto do primeiro número pelo quadrado do segundo;
c) O quadrado do primeiro número;
d) A raiz quadrada da soma dos quadrados;
e) O seno da diferença do primeiro número pelo segundo;
f) O módulo do primeiro número.*/

double x,y,a,b,c,d,e,f;

        int main(){

        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &x);
        printf("\nDigite o segundo valor: ");
        scanf("%lf", &y);

        double a = x+y;
        double b = x*(y*y);
        double c = x*x;
        double d = sqrt((x*x)+(y*y));
        double e = sin(x-y);
        double f = abs(x);

        printf("\nA soma dos números é: %.2lf", a);
        printf("\nO produto do primeiro número pelo quadrado do segundo: %.2lf", b);
        printf("\nO quadrado do primeiro número: %.2lf", c);
        printf("\nA raiz quadrada da soma dos quadrados: %.2lf", d);
        printf("\nO seno da diferença do primeiro número pelo segundo (em radiano): %.2lf", e);
        printf("\nO módulo do primeiro número: %.2lf" ,f);

        return 0;



}