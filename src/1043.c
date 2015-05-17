#include <stdio.h>

int main(){
	double a, b, c, area, p;
	scanf("%lf %lf %lf", &a , &b, &c);
	if( (a < (b+c)) && (b < (a+c)) && (c < (a+b))){
		p = a + b + c;
		printf("Perimetro = %.1lf\n", p);
	}
		else{ 
			area = (c*(a+b))/2;
			printf("Area = %.1lf\n", area);
		}
	return 0;
}
