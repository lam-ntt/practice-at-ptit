#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d %d", &a, &b);
		int i;
	  	if(b>a){
	  		i=a; a=b; b=i;
		}  
		while(b!=0){
			i=a; a=b; b=i%b;
		}
		printf("%d\n", a);
	}
	return 0;
}
