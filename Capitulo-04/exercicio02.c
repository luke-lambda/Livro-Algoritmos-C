#include <stdio.h>

int main(){
    int numero;

    printf("Digite:\n\t1-saldo\n\t2-extrato\n\t3-saque\n\t4-sair\n");
    scanf("%d", &numero);

    switch(numero){
        case 1: printf("Saldo\n");
        break;
        case 2: printf("Extrato\n");
        break;
        case 3: printf("Saque\n");
        break;
        case 4: printf("Sair\n");
        break;
        default: printf("Opcao invalida\n");
        break;
    }

    return 0;
}