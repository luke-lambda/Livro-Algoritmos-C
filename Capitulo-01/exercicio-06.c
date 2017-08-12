#include <stdio.h>

int main()
{
    float real, cotacaoDolar, dolar;

    printf("Digite o valor em R$ a ser convertido: ");
    scanf("%f", &real);

    printf("Digite o valor da cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    dolar = real / cotacaoDolar;

    printf("O valor em US$ eh de: %.2f\n", dolar);

    return 0;
}