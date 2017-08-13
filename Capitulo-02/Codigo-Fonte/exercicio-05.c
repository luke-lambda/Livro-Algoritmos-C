#include <stdio.h>
#include <math.h>

int main()
{
    float c, j, m, f;

    // c = Capital; j = Taxa de juros mensal fixa; m = Aplicação em meses; f = Montante;

    printf("Informe o capital: ");
    scanf("%f", &c);

    printf("Informe a taxa de juros mensal fixa: ");
    scanf("%f", &j);

    printf("Informe o periodo de aplicacao em meses: ");
    scanf("%f", &m);

    f = c * pow((1+j)/100, m);

    printf("Montante: %.2f\n", f);

    return 0;
}