#include<stdio.h>

int main(){
	double a, b; scanf("%lf %lf", &a, &b);
	if(a==0){
		if(b==0) printf("Vo so nghiem");
		else printf("Vo nghiem");
	}else{
		printf("%.2f", -b/a);
	}
	return 0;
}
