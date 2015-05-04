#include <stdio.h>

int main() {
	float num;
	scanf("%f", &num);
	if((num >= 0.00) && (num <= 25.00)){
		printf("Intervalo [0,25]\n");
	}
	if((num > 25.00) && (num <= 50.00)){
		printf("Intervalo (25,50]\n");
	}
	if((num > 50.00) && (num <= 75.00)){
		printf("Intervalo (50,75]\n");
	}
	if((num > 75.00) && (num <= 100.00)){
		printf("Intervalo (75,100]\n");
	}
	if((num > 100.00) || (num < 0.00)){
		printf("Fora de intervalo\n");
	}
	return 0;
}