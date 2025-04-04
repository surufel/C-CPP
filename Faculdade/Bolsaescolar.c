#include <stdio.h>

/*Uma instituição de Ensino Superior deseja implementar um sistema para conceder benefícios
financeiros aos alunos com base em critérios específicos. O sistema deve avaliar os dados do estudante
e determinar se ele tem direito a uma bolsa de estudo.*/

    double renda,media,frequencia,n1,n2;


    int main(){

        printf("\nGerenciameneto de Benefícios para Estudantes");
        printf("\nQual é a renda familiar?: ");
        scanf("%lf", &renda);
        printf("\nQual é a primeira nota do aluno?: ");
        scanf("%lf", &n1);
        printf("\nQual é a segunda nota do aluno?: ");
        scanf("%lf", &n2);
        printf("\nQuantas aulas o aluno já atendeu?: ");
        scanf("%lf", &frequencia);
        
        media = n1 + n2 / 2;

        if (renda<=2000 && media>=7.5 && frequencia>=150){
            printf("\nO aluno está elegível a receber uma bolsa.");
        }
            else{
                printf("\nO aluno NÃO está elegível a receber bolsa.");
            }
        }