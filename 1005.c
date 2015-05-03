#include <stdio.h>

int main (){
	double A;
	double B;
	scanf("%lf %lf", &A, &B);
	double MEDIA; 
	MEDIA = (3.5*A+7.5*B)/11;
	printf("MEDIA = %.5lf\n", MEDIA);
	return 0;
}