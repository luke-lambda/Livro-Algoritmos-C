#include <stdio.h>

int main()
{
	float comprimento, largura, metrosQuadrados;

	printf("Digite o comprimento: ");
	scanf("%f", &comprimento);

	printf("Digite a largura: ");
	scanf("%f", &largura);

	metrosQuadrados = comprimento * largura;
	printf("A area em metros quadrados eh: %.2f\n", metrosQuadrados);

	return 0;
}
