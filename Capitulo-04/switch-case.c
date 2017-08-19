#include <stdio.h>
#include <ctype.h>

int main(){
    char s;

    printf("Sexo? ");
    scanf("%c", &s);

    switch(touuper(s)){
        case 'M': printf("Masculino\n");
        break;
        case 'F': printf("Feminino\n");
        break;
        defaul: printf("Invalido\n");
        break;
    }

    return 0;
}