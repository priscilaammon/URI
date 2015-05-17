#include <stdio.h>

int main() {
	float N1, N2, N3, N4, media, mediae, exame;
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	media = ((N1*2) + (N2*3) + (N3*4) + (N4))/10;
	if(media >= 7){
		printf("Media: %.1f\nAluno aprovado.\n", media);
	}
	else if(media < 5){
		printf("Media: %.1f\nAluno reprovado.\n", media);
	}
	else{
		scanf("%f", &exame);
		mediae = (exame + media)/2;
	
		if(mediae >= 5){
			printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", media, exame, mediae);
		}
		if(mediae < 5){
			printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n", media, exame, mediae);
		}
	}
	return 0;
}