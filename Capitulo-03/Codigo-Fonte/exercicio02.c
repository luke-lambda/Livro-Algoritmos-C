#include <stdio.h>

int main(){
    int pecas_produzidas, pecas_defeituosas;

    printf("Digite o total de pecas produzidas: ");
    scanf("%d", &pecas_produzidas);
    
    printf("Digite o total de pecas defeituosas: ");
    scanf("%d", &pecas_defeituosas);

    if((pecas_defeituosas) > (0.1 * pecas_produzidas)) {
        printf("A maquina precisa de manutensao.\n");
    } else {
        printf("A maquina nao precisa de manutensao.\n");
    }

    return 0;
}