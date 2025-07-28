#include <stdio.h>

int main()
{
    int idade, matricula;
    char nome[50];
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua Matrícula: ");
    scanf("%d", &matricula);
    printf("\n");

    printf("Nome do aluno: %s - Matrícula: %d \n", nome,matricula);
    printf("Idade: %d - Altura: %.2f \n", idade,altura);



    return 0;
}

