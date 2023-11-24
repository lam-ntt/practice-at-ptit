#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);
	if(a==0){
		if(b==0){
			if(c==0) printf("Vo so nghiem");
			else printf("NO");
		}else{
			printf("%.2f", -c/b);
		}
	}else{
		double dental=b*b-4*a*c;
		if(dental>0) printf("%.2f %.2f", (-b+sqrt(dental))/(2*a), (-b-sqrt(dental))/(2*a));
		else if(dental==0) printf("%.2f", -b/(2*a));
		else printf("NO");
	}
	return 0;
}
