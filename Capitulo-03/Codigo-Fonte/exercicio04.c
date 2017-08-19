#include <stdio.h>

int main(){
	float a, b, c;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &c);
	
	if((((b - c) < a < (b + c)) || (((a - c) < b < (a + c)))) || ((a - b) < c < (a + b))){
		if((a != b) && (a != c) && (c != b)) {
			printf("Triangulo Escaleno.\n");
		} else if((a == b) && (b == c) && (c == a)){
			printf("Triangulo Isosceles.\n");
		} else {
			printf("Triangulo Equilatero.\n");
		}
	} else {
		printf("Nao eh um triangulo.\n");
	}
		
	return 0;
}