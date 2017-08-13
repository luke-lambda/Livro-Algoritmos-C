#include <stdio.h>

int main()
{
    float comprimento, largura, metroQuadrado, precoMetroQuadrado, custo;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", &largura);

    metroQuadrado = comprimento * largura;

    printf("Digite o preco do metro quadrado de carpete: ");
    scanf("%f", &precoMetroQuadrado);

    custo = metroQuadrado * precoMetroQuadrado;
    printf("O custo total para forrar o piso da sala sera de: %.2f\n", custo);

    return 0;
}