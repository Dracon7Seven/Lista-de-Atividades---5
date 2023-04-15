#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAIOR printf("\nMaior de idade, pode comprar cerveja.\n")
#define MENOR printf("\nMenor de idade, não pode comprar cerveja\n")

int main()
{
    char nome[50];
    int idade;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira seu nome: ");
    fgets(nome, 50, stdin);
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    system("pause");
    system("cls");

    printf("Seu nome é %se você tem %d anos.", nome, idade);

    if (idade >= 18)
        MAIOR;
    else
        MENOR;

    return 0;
}
