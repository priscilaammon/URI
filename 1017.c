#include <stdio.h>

int main() {
	int t;
	int vm;
	scanf("%d %d", &t, &vm);
	float d1;
	float d2;
	d1 = vm * t; 
	d2 = d1/12;
	printf("%.3f\n", d2);
	return 0;
}