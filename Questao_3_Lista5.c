#include <stdio.h>
#include <locale.h>
#define MEDIA(n1, n2, n3, n4) (n1 + n2 + n3 + n4)

int main()
{
    float n1, n2, n3, n4, media;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1º valor: ");
    scanf("%f", &n1);
    printf("Digite o 2º valor: ");
    scanf("%f", &n2);
    printf("Digite o 3º valor: ");
    scanf("%f", &n3);
    printf("Digite o 4º valor: ");
    scanf("%f", &n4);

    media = MEDIA(n1, n2, n3, n4);
    printf("Resultado da média dos quatro valores: %f", media / 4);

    return 0;
}