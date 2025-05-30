/* É utilizada para criar tipos de dados personalizados,
que podem conter diferentes itpos de dados agrupados sob um unico nome.
Uma estrutura (struct) permite que voce defina um novo tipo de dado composto 
por diversos campos com diferentes tipos de dados. */

/*

struct nome
{
    variáveis;
    }identificador(opcional);

*/

/*
#include<stdio.h>
#include<stdlib.h>

int main{

    struct CadastroPessoa
    {
        int idade;
        float altura;
        float peso;
        char nome[50];
    }pessoa;
 
    // para usar algum campo se utiliza: nomedocampo.nomedodado

    int i;
    struct dadosPessoas alunos[10];
    for(i=0; i<10; i++){
        printf("D   igite a idade da pessoa %d: ", i);
        scanf("%d", &alunos[i].idade);
    }
}
*/

    #include <stdio.h>
    #include <stdlib.h>
    int i;

    struct CadastrarTitulos{
        int CodigoTitulo;
        char nomeCliente[80];
        char Nature[30]; // Credito ou Debito
        float ValorTitulo;
        char DataBaixa[10];
    };
    int main(){
        struct CadastrarTitulos CadTit[3];
        for(i=1;i<=3;i++){
            printf("Num Titulo:00%i\n", i);        
            printf("Informe o nome do cliente\n");
            scanf("%s",&CadTit[i].nomeCliente);
            printf("Informe a natureza do titulo\n");
            scanf("%s",&CadTit[i].Nature);
            printf("Digite o valor do Titulo\n");
            scanf("%f",&CadTit[i].ValorTitulo);
            printf("Informe a data de Pagamento\n");
            scanf("%s",&CadTit[i].DataBaixa);
        }
        for(i = 1; i<=3; i++){
            printf("=================================\n");
            printf("| Num Titulo...:000%i |\n", i);
            printf("Cliente: %s \n", CadTit[i].nomeCliente);
            printf("Natureza: %s \n", CadTit[i].Nature);
            printf("Valor Titulo: %.2f \n", CadTit[i].ValorTitulo);
            printf("Data Baixa: %s \n",CadTit[i].DataBaixa);
            printf("=================================\n");
            printf("\n");
        }
    }
