#include <stdio.h>

int main()
{
    float compra, desconto, pagamento;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);

    printf("Digite o percentual de desconto [0.0 ate 1.0]: ");
    scanf("%f", &desconto);

    pagamento = compra * desconto;
    pagamento = compra - pagamento;

    printf("O valor a ser pago eh de: %.2f\n", pagamento);

    return 0;
}