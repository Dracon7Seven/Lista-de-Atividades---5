#include <stdio.h>
#include <locale.h>
long int fatorial(int n);

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    for (num = 30; num <= 33; num++)
    {
        printf("O fatorial de %d é %ld\n", num, fatorial(num));
    }
    return 0;
}

long int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}
