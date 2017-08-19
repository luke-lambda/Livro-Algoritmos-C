#include <stdio.h>
#include <ctype.h>

int main(){
    char estadoCivil;

    printf("Estado civil: [s, c, d, v]: ");
    scanf("%c", &estadoCivil);

    switch(tolower(estadoCivil)){
        case 's': printf("Solteiro\n");
        break;
        case 'c': printf("Casado\n");
        break;
        case 'd': printf("Divorciado\n");
        break;
        case 'v': printf("Viuvo\n");
        break;
        default: printf("Erro\n");
        break;
    }

    return 0;
}