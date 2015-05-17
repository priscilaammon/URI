#include <stdio.h>

int main(){ 
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
		if (x > y && x > z && y > z){
			printf("%d\n%d\n%d\n", z, y, x);
		}
			else {
				if(x > y && x < z){
					printf("%d\n%d\n%d\n", y, x, z);
				}
				else {
					if(x < y && x > z){
						printf("%d\n%d\n%d\n", z, x, y);
					}
					else{
						if(y > x && y < z){
							printf("%d\n%d\n%d\n", x, y, z);
						}
						else{
							if(z > x && z < y){
								printf("%d\n%d\n%d\n", x, z, y);
							}
							else{
								if(z < x && z > y){
									printf("%d\n%d\n%d\n", y, z, x);
								}
								else{
									if(x > y && x == z){
										printf("%d\n%d\n%d\n", y, z, x);
									}
									else{
										if(x > z && x == y){
											printf("%d\n%d\n%d\n", z, y, x);
										}
										else{
											if(y > x && y == z){
												printf("%d\n%d\n%d\n", x, z, y);
											}
											else{
												if(y > z && y == x){
													printf("%d\n%d\n%d\n", z, x, y);
												}
												else{
													if(z > x && z == y){
														printf("%d\n%d\n%d\n", x, y, z);
													}
													else{
														if(z > y && z == x){
															printf("%d\n%d\n%d\n", y, x, z);
														}
														else{
															if(x = y = z){
																printf("%d\n%d\n%d\n", x, y, z);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
	printf("\n%d\n%d\n%d\n", x, y, z);
return 0;
} 