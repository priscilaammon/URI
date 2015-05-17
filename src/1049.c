#include <stdio.h>

int compara(char s1[], char s2[]){
	int i, teste = 1;
	for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
		if(s1[i] != s2[i]){
			teste = 0;
		}
	}
	if (s1[i] != '\0' || s2[i] != '\0')
		teste = 0;
	return teste;
}

int main(){ 
	char string1[100], string2[100], string3[100];
	scanf("%s %s %s", string1, string2, string3);
	if(compara(string1, "vertebrado") == 1) {
		if(compara(string2, "ave") == 1){
			if(compara(string3, "carnivoro") == 1){
				printf("aguia\n");
			}

			if(compara(string3, "onivoro") == 1){
				printf("pomba\n");
			}
		}

		if(compara(string2, "mamifero") == 1){
			if(compara(string3, "onivoro") == 1){
				printf("homem\n");
			}

			if(compara(string3, "herbivoro") == 1){
				printf("vaca\n");
			}
		}
	}

	if(compara(string1, "invertebrado") == 1){
		if(compara(string2, "inseto") == 1){
			if(compara(string3, "hematofago") == 1){
				printf("pulga\n");
			}

			if(compara(string3, "herbivoro") == 1){
				printf("lagarta\n");
			}
		}

		if(compara(string2, "anelideo") == 1){
			if(compara(string3, "hematofago") == 1){
				printf("sanguessuga\n");
			}

			if(compara(string3, "onivoro") == 1){
				printf("minhoca\n");
			}
		}
	}
	return 0;
}