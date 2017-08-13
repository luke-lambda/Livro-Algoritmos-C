#include <stdio.h>

int main()
{
    float distancia, combustivelGasto, consumoMedio;

    printf("Informe a distancia percorrida: ");
    scanf("%f", &distancia);

    printf("Informe o total de combustivel gasto: ");
    scanf("%f", &combustivelGasto);

    consumoMedio = distancia / combustivelGasto;

    printf("O consumo medio do veiculo eh de: %.2f\n", consumoMedio);

    return 0;
}