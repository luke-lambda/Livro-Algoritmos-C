#include <stdio.h>

int main(){
	int idade;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	if(idade >= 0){
		if(idade <= 10){
			printf("Categoria infantil");
		} else if(idade <= 17){
			printf("Categoria juvenil");
		} else {
			printf("Categoria senior");
		}
	} else {
		printf("Dados invalidos.");
	}
	
	return 0;
}