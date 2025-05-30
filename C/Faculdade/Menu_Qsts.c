#include<stdio.h>
#include<stdlib.h> 
#include<locale.h>

int i,j,op,valor,num;

void MenuQuestao(){
    valor = 1;
    int matriz[3][5];
    for(i=0;i<3;i++){
        for(j=0;j<5;j++)
            matriz[i][j]=valor++;
    }
    printf("=========================\n");
    printf("|   Menu  de  Questões  |\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++)
            printf("|%4i",matriz[i][j]);
        printf("|\n");
    }
    printf("|-------------------------|\n");
}

void Questao001(){
        printf("Questão 001 em desenvolvimento\n");
}
void Questao002(){
    printf("Questão 002 em desenvolvimento\n");
}
void Questao003(){
    printf("Questão 003 em desenvolvimento\n");
}
void Questao004(){
    printf("Questão 004 em desenvolvimento\n");
}
void Questao005(){
    printf("Questão 005 em desenvolvimento\n");
}
void Questao006(){
    printf("Questão 006 em desenvolvimento\n");
}
void Questao007(){
    printf("Questão 007 em desenvolvimento\n");
}
void Questao008(){
    printf("Questão 008 em desenvolvimento\n");
}
void Questao009(){
    printf("Informe um numero \n");
    scanf("%i",&num);
    printf("Antecessor: %i Sucessor: %i\n",num-1,num+1);
}
void Questao010(){
    printf("Questão 010 em desenvolvimento\n");
}
void Questao011(){
    printf("Questão 011 em desenvolvimento\n");
}
void Questao012(){
    printf("Questão 012 em desenvolvimento\n");
}
void Questao013(){
    printf("Questão 013 em desenvolvimento\n");
}
void Questao014(){
    printf("Questão 014 em desenvolvimento\n");
}
void Questao015(){
    printf("Questão 015 em desenvolvimento\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    do{
        MenuQuestao();
        printf("Selecione a questão entre 1 e 15 (0 para abortar). \n");
        scanf("%i",&op);
        switch(op){
            case 1:
            Questao001();
            break;
            case 2:
            Questao002();
            break;
            case 3:
            Questao003();
            break;
            case 4:
            Questao004();
            break;
            case 5:
            Questao005();
            break;
            case 6:
            Questao006();
            break;
            case 7:
            Questao007();
            break;
            case 8:
            Questao008();
            break;
            case 9:
            Questao009();
            break;
            case 10:
            Questao010();
            break;
            case 11:
            Questao011();
            break;
            case 12:
            Questao012();
            break;
            case 13:
            Questao013();
            break;
            case 14:
            Questao014();
            break;
            case 15:
            Questao015();
            break;
            default:
        }

        }while(op!=0);
}