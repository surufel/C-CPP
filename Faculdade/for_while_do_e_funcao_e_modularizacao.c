#include <stdlib.h>
#include <stdio.h>

    int main(){

        int x,y,i;

     /* O for é  usado bastante para trabalhar com matrizes[como assentos]
     vetores [como movimentos] pilhas e buscas em estrutura de dados.
     Ele é composto por inicialização (i = 20), teste (i >=10), incrementação (i--)
     */
        
        for ( i = 20; i >= 10 ; i--) {
            printf("i = %d\n",i);
        } 

        /* Minha interpretação é que, enquanto i (que é 20),
        enquanto não for menor ou igual a dez
        ele vai continuar se decrementando. */

        /* talvez eu faça um push ou outro commit pra fazer algum sisteminha e mandar no github*/

    






        system("pause");
}

    int estoyloco(){ //molde -> tipo_de_função nome_da_função(parâmetros)
    
        // tipo_retorno: tipo de dado que a função retorna após a execução
        // nome_da_função: identificador que é usado para chamar a função
        // corpo da função (onde o código é escrito)
        // parâmetros: lista de variáveis que a função pode aceitar como entrada.
        // pode incluir declaração de variáveis locais, estrutura de controle, etc.
        // return valor_de_retorno; (opcional, dependendo do tipo de retorno da função)

        /*Uma função é um bloco de código que executa uma tarefa específica quando chamadao. 
        Ela pode aceitar argumentos como entrada, processá-los e pode dou não retoranr um valor.
        É uma parte fundamental da programação em C e são usadas para dividir o código em partes menores
        e mais gerenciáveis, melhorando a eligibilidade, reutilização e manutenção do código.
        Pode ser utilizado para cadastro de clientes, é reutilização de códigos, você
        chama o código novamente em vez de ter que fazer vários código em um único local. */

        // void, int, float...

        // void é uma função sem retorno

        /* como funciona função do tipo inteiro:
        variável do tipo inteiro para receber o resultado da soma
        retorno da função com a variável resultado.
        
        int soma(int a,int b){
        resultado = a+b;
        return resultado;
        }
        
        é possível criar funções void para chamá-las depois e atribuir um valor.. Em um exemplo
        de um programa que cálcula área de quadrado e triângulos, você pode criar uma função
        com void e fazer a área dos dois em funções diferentes. Em seguida, pode-se implementar
        na função main para atribuir valores em cima da função. */

        /* Modularização refere-se à prática de dividir um programa em módulos independentes e bem definidos
        Cada modulo é responsável por realizar uma tarefa específica do programa. Isso é feito principalmente
        através do uso de funções e arquivos de cabeçalho */

            
}