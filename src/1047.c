#include <stdio.h>

int main() {
	int hi, mi, hf, mf, dur_h, dur_m;
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	if(hf <= hi){
		if(mf >= mi){
			dur_h = 24 + (hf - hi);
			dur_m = mf - mi;
		}
		else{
			dur_h = 24 + hf - hi - 1;
			dur_m = 60 - mi +mf;
		}
	}
	else{
		if(mi <= mf){
			dur_h = hf - hi;
			dur_m = mf - mi;
		}
		else{
			dur_h = hf - hi - 1;
			dur_m = 60 - mi + mf;
		}
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur_h, dur_m);
	return 0;
}