#include <stdio.h>
#include <stdlib.h>

int i, j, DC,DL;
int main(){
    printf("Informe a dimensao linha\n");     //Declara o tamanho da matriz (linha)(coluna).
    scanf("%i",&DL);
    printf("Informe a dimensao coluna\n");
    scanf("%i", &DC);
    int matriz[DL][DC];
    for(i=0;i<DL;i++){
        for(j=0;i<DC;j++)
        scanf("%i",&matriz[i][j]);
    }
    for(i=0;i<DL;i++){
        for(j=0;j<DC;j++)
        printf("|%4i",matriz[i][j]);
        printf("|\n");
    }

}