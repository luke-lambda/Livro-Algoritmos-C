#include <stdio.h>
#include <ctype.h>

int main(){
    char sexo;
    float altura, pesoIdeal=0;

    printf("Digite o sexo:\n\tM - Masculino\n\tF - Feminino\n");
    scanf("%c", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    switch(toupper(sexo)){
        case 'M': pesoIdeal = (72.7 * altura) - 58;
        break;
        case 'F': pesoIdeal = (62.1 * altura) - 44.7;
        break;
        default: printf("Opcao invalida\n");
        break;
    }

    printf("Peso Ideal: %.2f\n", pesoIdeal);

    return 0;
}