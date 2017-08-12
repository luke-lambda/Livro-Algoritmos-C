#include <stdio.h>

int main()
{
	float totalVendas, comissao;

	printf("Digite o valor total de vendas: ");
	scanf("%f", &totalVendas);

	comissao = totalVendas * 0.1;
	printf("A comissao eh de: %.2f\n", comissao);

	return 0;
}
