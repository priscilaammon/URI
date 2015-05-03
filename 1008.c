#include <stdio.h>

int main() {
	int numero;
	int horastrabalhadas;
	float valorporhora;
	scanf("%d %d %f", &numero, &horastrabalhadas, &valorporhora);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, horastrabalhadas*valorporhora);
	return 0;
}