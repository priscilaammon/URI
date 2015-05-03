#include <stdio.h>

int main() {
	int idade, ano, mes, dia, x;
	scanf("%d", &idade);
	ano = idade/365;
	x = idade%365;
	mes = x/30;
	dia = x%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	return 0;
}