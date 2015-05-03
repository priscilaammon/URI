#include <stdio.h>

int main() {
	int X;
	float Y; 
	float consumoMedio;
	scanf("%d %f", &X, &Y);
	consumoMedio = X/Y;
	printf("%.3f km/l\n", consumoMedio);
	return 0;
}