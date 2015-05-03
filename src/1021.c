#include <stdio.h>

int main() {
	double N;
	scanf("%lf", &N);
	double n_centavos = N - (int)N;
	int n_inteiro = (int)N;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$100.00\n", n_inteiro/100);
	n_inteiro = n_inteiro%100;
	printf("%d nota(s) de R$100.00\n", n_inteiro/50);
	n_inteiro = n_inteiro%50;
	printf("%d nota(s) de R$20.00\n", n_inteiro/20);
	n_inteiro = n_inteiro%20;
	printf("%d nota(s) de R$10.00\n", n_inteiro/10);
	n_inteiro = n_inteiro%10;
	printf("%d nota(s) de R$5.00\n", n_inteiro/5);
	n_inteiro = n_inteiro%5;
	printf("%d nota(s) de R$2.00\n", n_inteiro/2);
	n_inteiro = n_inteiro%2;

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", n_inteiro);
	int centavos = n_centavos *100;
	printf("%d moeda(s) de R$ 0.50\n", centavos/50);
	centavos = centavos%50;
	printf("%d moeda(s) de R$ 0.25\n", centavos/25);
	centavos = centavos%25;
	printf("%d moeda(s) de R$ 0.10\n", centavos/10);
	centavos = centavos%10;
	printf("%d moeda(s) de R$ 0.05\n", centavos/5);
	centavos = centavos%5;
	printf("%d moeda(s) de R$ 0.01\n", centavos);

	return 0;
}