#include <stdio.h>

int main() {
	int codigo1;
	int numero1;
	float valor1;
	int codigo2;
	int numero2;
	float valor2;
	scanf("%d %d %f", &codigo1, &numero1, &valor1);
	scanf("%d %d %f", &codigo2, &numero2, &valor2);
	numero1*valor1+numero2*valor2;
	printf("VALOR A PAGAR: R$ %.2lf\n", numero1*valor1+numero2*valor2);
	return 0;
}