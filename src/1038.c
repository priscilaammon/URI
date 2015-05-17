#include <stdio.h>

int main(){
	int cod, qtde;
	double preco;
	scanf("%d %d", &cod, &qtde);
	if(cod == 1){
		preco = (qtde * 4.00);	
	}
	if(cod == 2){
		preco = (qtde * 4.50);
	}
	if(cod == 3){
		preco = (qtde * 5.00);
	}
	if(cod == 4){
		preco = (qtde * 2.00);
	}
	if(cod == 5){
		preco = (qtde * 1.50);
	}
		printf("Total: R$ %.2lf\n", preco);
	return 0;
}