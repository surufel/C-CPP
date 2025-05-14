#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int j, i, op, QtdReg, QtdItem, cod; 
float TotalGeral = 0;
float totalItem = 0;
int QtdItem = 0;

struct cardapioProduto {
    int codigo;
    float ValorProd; 
    char descricao[50];    
};

struct MontaPedido {
    int cod;
    int qtd;
};

void MenuProduto(){
	printf("==========================================\n");
	printf("|         LANCHONETE-LANCHEBEM           |\n");
	printf("|----------------------------------------|\n");
	printf("| CODIGO |  DESCRICAO       |   PRECO    |\n");
	printf("|----------------------------------------|\n");
	printf("|  100   |  CACHORRO QUENTE |    4.20    |\n");
	printf("|----------------------------------------|\n");
	printf("|  101   |  BAURU SIMPLES   |    3.30    |\n");
	printf("|----------------------------------------|\n");
	printf("|  102   |  BAURU COM OVO   |    5.50    |\n");
	printf("|----------------------------------------|\n");
	printf("|  103   |  HAMBURGER       |    6.20    |\n");
	printf("|----------------------------------------|\n");
	printf("|  104   |  CHEESERBURGUER  |    5.30    |\n");
	printf("|----------------------------------------|\n");
	printf("|  105   |  REFRIGERANTE    |    4.50    |\n");
	printf("|----------------------------------------|\n");
	printf("||\n");
	printf("||\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	MenuProduto();
	struct cardapioProduto cardapio[6];
	for(i=0;i<6;i++){
		printf("Digite o código:\n");
		scanf("%i",&cardapio[i].codigo);
		printf("Informe a descrição do produto\n");
		scanf("%[^\n]",cardapio[i].descricao);
		printf("Digite o valor do produto\n");
		scanf("%f",&cardapio[i].ValorProd);
	}
	printf("==========================================\n");
	printf("|        MONTE    SEU     PEDIDO         |\n");
	printf("==========================================\n");
	printf("Informe a quantidade de Itens do seu pedido\n");
	scanf("%i",&QtdReg);
	struct MontaPedido Monta[QtdReg];
	for(i=0;i<QtdReg;i++){
		printf("Digite um código\n");
		scanf("%i",&Monta[i].cod);
		printf("Informe uma quantidade\n");
		scanf("%i",&Monta[i].qtd);
	}
	printf("==========================================\n");
	printf("|        SEU   PEDIDO   MONTADO          |\n");
	printf("==========================================\n");
	for(i=0;i<QtdReg;i++){
		for(j=0;j<6;j++){
			if(Monta[i].cod==cardapio[j].codigo){
				totalItem = Monta[i].qtd*cardapio[j].ValorProd;
				printf("Codigo.....:%i\n",cardapio[j].codigo);
				printf("Produto....:%s\n",cardapio[j].descricao);
				printf("Quant......:%i\n",Monta[i].qtd);
				printf("Valor......:%.2f\n",cardapio[j].ValorProd);
				printf("Total item.:%.2f\n",totalItem);
				TotalGeral += totalItem;
				QtdItem += 1;
				break;
			}
			if(!QtdItem){
				printf("Código de produto inválido.%i\n",Monta[i].cod);
			}
		}
	}
printf("==========================================\n");
printf("|        RESUMO   DO   PEDIDO            |\n");
printf("==========================================\n");
printf("|QUANT. GERAL ITEM: %i |\n",QtdItem);
printf("|TOTAL GERAL      :%.2f|",TotalGeral);
printf("==========================================\n");
}
