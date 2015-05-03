#include <stdio.h>

int main() {
	int N;
	int h, min, s;
	scanf("%d", &N);
	h = N/3600;
	min = (N -(h*3600))/60;
	s = (N - ((h*3600)+(min*60)));
	printf("%d:%d:%d\n", h, min, s);
	return 0;
}