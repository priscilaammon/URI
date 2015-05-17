#include <stdio.h>

int main() {
	int i, f, d;
	scanf("%d %d", &i, &f);
	d = (24 - i) + f;
	if(d > 24){
		d = d - 24;
	}
	printf("O JOGO DUROU %d HORA(S)\n", d);
	return 0;
}