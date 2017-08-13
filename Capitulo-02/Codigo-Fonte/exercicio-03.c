#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O valor do IMC eh de: %.2f\n", imc);    

    return 0;
}