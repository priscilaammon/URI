#include <stdio.h>

int main() {
	double N, n_centavos;
	int cm, cinq, vint, dez, cinc, dois, n1, n2, n3, n4, n5, n6, um, ci, v, d, c, u, n7, n8, n9, n10, n_inteiro, centavos;
	scanf("%lf", &N);
	n_centavos = N - (int)N;
	n_inteiro = (int)N;
	//notas
	cm = n_inteiro/100;
	n1 = n_inteiro%100;
	cinq = n1/50;
	n2 = n1%50;
	vint = n2/20;
	n3 = n2%20;
	dez = n3/10;
	n4 = n3%10;
	cinc = n4/5;
	n5 = n4%5;
	dois = n5/2;
	n6 = (n5%2);
	//moedas
	um = n6/1;
	centavos = n_centavos *100;
	c = centavos/50;
	n7 = centavos%50;
	v = n7/25;
	n8 = n7%25;
	d = n8/10;
	n9 = n8%10;
	ci = n9/5;
	n10= n9%5;
	u = n10/1;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", cm, cinq, vint, dez, cinc, dois);
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", um, c, v, d, ci, u);
	return 0;
}