#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SOMA(n1, n2) (n1 + n2)
#define SUB(n1, n2) (n1 - n2)
#define MULTI(n1, n2) (n1 * n2)
#define DIV(n1, n2) (n1 / n2)
int main()
{
    int num1, num2, soma, sub, mult, div;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1º valor: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);
    soma = SOMA(num1, num2);
    sub = SUB(num1, num2);
    mult = MULTI(num1, num2);
    div = DIV(num1, num2);
    printf("Resultado das operações aritméticas \nSoma:  %d \nSubtração: %d \nMultiplicação: %d \nDivisão: %d", soma, sub, mult, div);

    return 0;
}