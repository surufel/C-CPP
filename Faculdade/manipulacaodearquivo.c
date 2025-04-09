#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opMenuprincipal, opMenuCadastro, opMenuImpressao;
int codigo;
char descricao[50];

    void CadastroProduto(){
        printf("Digite o codigo\n");
        scanf("%i", &codigo);
        printf("Informe a descricao do produto\n");
        scanf("%s", descricao);
    }

    void MenuPrincipal(){// Função do Menu Principal
    printf("+====================================+\n");
    printf("|        PROTOTIPO DO PROJETO        |\n");
    printf("|------------------------------------|\n");
    printf("|   1- CADASTRO    |    2 - W.I.P.   |\n");
    printf("|------------------------------------|\n");
    printf("|   3 - W.I.P.     |   4 - W.I.P.    |\n");
    printf("+====================================+\n");
    printf("|  Selecione uma opcao ou 5 p/ sair  |\n");
    scanf("%i", &opMenuprincipal);

}

    void MenuCadastro(){ // Função de Menu de Cadastro
        do{ 
    printf("+====================================+\n");
    printf("|           MENU  CADASTRO           |\n");
    printf("|------------------------------------|\n");
    printf("|   1- CADASTRO  |  2 - W.I.P.       |\n");
    printf("|------------------------------------|\n");
    printf("|   3- W.I.P.     |  4 - W.I.P.      |\n");
    printf("+====================================+\n");
    printf("| Selecione uma opcao ou 5 p/ voltar |\n");
    printf("+====================================+\n");
    scanf("%i", &opMenuCadastro);
    switch(opMenuCadastro){
        case 1:{
            system("cls");
            CadastroProduto();
            break;
        }
        case 2:{
            system("cls");
            printf("Em desenvolvimento\n");
            break;
        }
        case 3:{
            system("cls");
            printf("Em desenvolvimento");
        }
        case 4:{
            system("cls");
            printf("Em desenvolvimento");
        }
    }
}while(opMenuCadastro=!5);
MenuPrincipal();
}

void MenuImpressao(){ // Função de Menu de Impressão
    printf("+====================================+\n");
    printf("|           MENU  IMPRESSAO          |\n");
    printf("|------------------------------------|\n");
    printf("|   1- CADASTRO  |  2 - N/A          |\n");
    printf("|------------------------------------|\n");
    printf("|   1- N/A        |  2 - N/A         |\n");
    printf("+====================================+\n");
    printf("| Selecione uma opcao ou 5 p/ voltar |\n");
    printf("+====================================+\n");
    scanf("%i", &opMenuImpressao);
}

    int main(){
        setlocale(LC_ALL, "Portuguese"); // Define o idioma do código.
      do{ MenuPrincipal();
        switch (opMenuprincipal){
        case 1:{
            system("cls");
            MenuCadastro();
            break;
        }
        case 2:{
            system("cls");
            MenuImpressao();
            break;
        }
        case 3:{

            break;
        }
        case 4:{
            break;
        }
        default:
        break;
        }
    }while(opMenuprincipal!=5);
    system("cls");

}