# include <stdio.h>

int main(){

//declaração das variáveis
char produtoA[30] = "Produto A", produtoB[30] = "Produto B";

unsigned int estoqueA = 1000, estoqueB = 2000;
float valorA = 10.50, valorB = 20.40;
unsigned int estoqueMinimoA = 500, estoqueMinimoB = 2500;
double valorTotalA, valorTotalB;
int resultadoA, resultadoB;

//exibir informações dos produtos

printf("Produto %s tem estoque de %u e um valor unitário de R$ %.2f \n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque de %u e um valor unitário de R$ %.2f \n", produtoB, estoqueB, valorB);

// comparação do valor mínimo de estoque

resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O %s tem estoque mínimo de %d \n", produtoA, resultadoA);
printf("O %s tem estoque mínimo de %d \n", produtoB, resultadoB);

//Comparação do valor total

valorTotalA = valorA * estoqueA;
valorTotalB = valorB * estoqueB;

printf("O valor total do produto A R$ %.2f é maior de o Valor total de B R$ %.2f ?: %d \n", valorTotalA, valorTotalB, valorTotalA > valorTotalB);

return 0;

}