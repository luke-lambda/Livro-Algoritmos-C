#include <stdio.h>

int main(){
    float n1=0, n2=0, resultado=0;
    char operador;

    printf("Digite um operador\n\t+ : somar\n\t- : subtrair\n\t/ : dividir\n\t* : multiplicar\n");
    scanf("%c", &operador);

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch(operador){
        case '+': resultado = n1 + n2;
        break;
        case '-': resultado = n1 - n2;
        break;
        case '*': resultado = n1 * n2;
        break;
        case '/': resultado = n1 / n2;
        break;
        default: printf("\nOpcao invalida.\n");
    }

    printf("Resultado: %.2f", resultado);

    return 0;
}