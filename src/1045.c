#include <stdio.h>

int main() {
	double a, b, c, aux;
	scanf("%lf %lf %lf", &a, &b, &c);
	if( (b > a) && (b > c)){
		aux = a;
		a = b;
		b = aux;
	}
	if( (c > a) && (c > b) ){
			aux = a;
			a = c;
			c = aux;
		}
	if(a >= (b+c)){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		if( ((a*a)==((b*b)+(c*c))) ){
			printf("TRIANGULO RETANGULO\n");
		}
		if( ((a*a)>((b*b)+(c*c))) ){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if( ((a*a)<((b*b)+(c*c))) ){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if((a==b) && (b==c)){
			printf("TRIANGULO EQUILATERO\n");
		}
		if( ((a==b) && (a!=c)) || ((a==c) && (a!=b)) || ((b==c) && (b!=a)) || ((b==c) && (c!=a)) ){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	return 0;
}
