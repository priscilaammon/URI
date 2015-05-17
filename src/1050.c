#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if(num == 61){
		printf("Brasilia\n");
	}
	if(num == 71){
		printf("Salvador\n");
	}
	if(num == 11){
		printf("Sao Paulo\n");
	}
	if(num == 21){
		printf("Rio de Janeiro\n");
	}
	if(num == 32){
		printf("Juiz de Fora\n");
	}
	if(num == 19){
		printf("Campinas\n");
	}
	if(num == 27){
		printf("Vitoria\n");
	}
	if(num == 31){
		printf("Belo Horizonte\n");
	}
	else{
		if(num!=61 && num!=71 && num!=11 && num!=21 && num!=32 && num!=19 && num!=27 && num!=31){
		printf("DDD nao cadastrado\n");
		}
	}
	return 0;
}