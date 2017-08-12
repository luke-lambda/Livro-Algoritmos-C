#include <stdio.h>

int main()
{
    float salario, reajuste, sr;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste [0.0 ate 1.0]: ");
    scanf("%f", &reajuste);

    // Formula do reajuste salarial [SR = SA + (SA x PR)/100]
    // SR = salario reajustado; SA = salario atual; PR = percentual de reajuste

    sr = salario + ((salario * reajuste) / 100);

    printf("Salario reajustado: %.2f\n", sr);

    return 0;
}