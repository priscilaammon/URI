#include <stdio.h> 

int main() {
	float volume;
	int raio;
	scanf("%d", &raio);
	printf("VOLUME = %.3f\n", (4.0/3) * 3.14159 * raio * raio * raio);	
	return 0;
}