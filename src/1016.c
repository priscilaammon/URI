#include <stdio.h>

int main() {
	int distancia;
	int tempo;
	scanf("%d", &distancia);
	int X = 60;
	int Y = 90;
	int Xmin = 1;
	float Ymin= 1.5; 
	tempo = distancia/(Ymin - Xmin);
	printf("%d minutos\n", tempo);
	return 0;
}