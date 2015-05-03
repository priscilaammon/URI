#include <stdio.h>

int main() {
	char nome[50];
	double salariofixo;
	double vendas;
	scanf("%s %lf %lf", nome, &salariofixo, &vendas);
	salariofixo + vendas*0.15;
	printf("TOTAL = R$ %.2lf\n", salariofixo + vendas*0.15);
	return 0;
}