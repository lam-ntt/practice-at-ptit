#include<stdio.h>

int check(int a, int b){
	int i;
	while(a!=0){
		i=a; a=b%a; b=i;
	}
	if(b==1) return 1;
	return 0;
}

int main(){
	int a, b, i; scanf("%d %d", &a, &b);
	if(a>b){
		i=a; a=b; b=i;	
	}
	for(int i=a; i<b; i++){
		for(int j=i+1; j<=b; j++){
			if(check(i, j)) printf("(%d,%d)\n", i, j);
		}
	}
	return 0;
}
