#include <stdio.h> 

int main() {
	int A;
	int B;
	int C;
	int MAIOR;
	int MAIOR2;
	scanf("%d %d %d", &A, &B, &C);
	MAIOR = (A+B+abs(A-B))/2;
	MAIOR2 = (MAIOR+C+abs(MAIOR-C))/2;
	printf("%d eh o maior\n", MAIOR2);
	return 0;
}