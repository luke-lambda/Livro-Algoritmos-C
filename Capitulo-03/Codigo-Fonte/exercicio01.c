#include <stdio.h>

int main()
{
    int copias;
    float preco;

    printf("Digite o total de copias: ");
    scanf("%d", &copias);

    if(copias >= 0) {
        if(copias <= 100) {
            preco = copias * 0.25;
        } else {
            preco = copias * 0.20;
        }

        printf("O total a ser pago eh: %.2f\n", preco);

    } else {
        printf("Numero de copias invalido.\n");
    }

    return 0;
}