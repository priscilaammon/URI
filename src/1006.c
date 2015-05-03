#include <stdio.h>

int main () {
	double A;
	double B;
	double C;
	scanf("%lf %lf %lf", &A, &B, &C);
	double MEDIA;
	MEDIA = (2*A+3*B+5*C)/10;
	printf("MEDIA = %.1lf\n", MEDIA);
	return 0; 
}