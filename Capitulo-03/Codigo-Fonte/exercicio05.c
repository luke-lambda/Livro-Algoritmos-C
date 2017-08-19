#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    if((n1 < n2) || (n1 < n3)){
        printf("%.2f\n", n1);
    }if((n2 > n1) || (n2 > n3)){
        printf("%.2f\n", n2);
    }if((n3 > n1) || (n3 > n2)){
        printf("%.2f\n", n3);
    }

    return 0;
}