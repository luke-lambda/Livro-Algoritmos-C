#include <stdio.h>

int main()
{
	float numero, dobro;

	printf("Digite um numero: ");
	scanf("%f", &numero);

	dobro = numero * 2;

	printf("O dobro do valor informado eh: %.2f\n", dobro);

	return 0;
}
