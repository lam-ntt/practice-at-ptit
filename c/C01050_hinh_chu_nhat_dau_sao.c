#include<stdio.h>

int main(){
	int width, heigh; scanf("%d %d", &width, &heigh);
	
	for(int i=0; i<width; i++){
		printf("*");
	}
	printf("\n");
	for(int i=0; i<heigh-2; i++){
		printf("*");
		for(int j=0; j<width-2; j++){
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=0; i<width; i++){
		printf("*");
	}
	return 0;
}
