#include <stdio.h>

int main() {
	int N, n1, n2, n3, n4, n5, n6;
	int cm, cinq, vint, dez, cinc, dois, um;
	scanf("%d", &N);
	cm = N/100;
	n1 = N%100;
	cinq = n1/50;
	n2 = n1%50;
	vint = n2/20;
	n3 = n2%20;
	dez = n3/10;
	n4 = n3%10;
	cinc = n4/5;
	n5 = n4%5;
	dois = n5/2;
	n6 = n5%2;
	um = n6/1;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", N, cm, cinq, vint, dez, cinc, dois, um);
	return 0;
		}