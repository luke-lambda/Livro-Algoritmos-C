#include <stdio.h>

int main(){
    int ano, resposta;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    resposta = (ano / 100 + ano % 100) % 5;
    
    switch(resposta){
        case 0: printf("Timido\n");
        break;
        case 1: printf("Sonhador\n");
        break;
        case 2: printf("Paquerador\n");
        break;
        case 3: printf("Atraente\n");
        break;
        case 4: printf("Irresistivel\n");
        break;
    }

    return 0;
}