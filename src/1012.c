#include <stdio.h> 

int main() {
	double A;
	double B;
	double C;
	double areaTriangulo;
	double areaCirculo;
	double areaTrapezio;
	double areaQuadrado;
	double areaRetangulo;
	scanf("%lf %lf %lf", &A, &B, &C);
	areaTriangulo = (A * C)/2;
	areaCirculo =  C * C * 3.14159;
	areaTrapezio = ((A + B) * C)/2;
	areaQuadrado = B * B;
	areaRetangulo = A *B;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo);
	return 0; 
}