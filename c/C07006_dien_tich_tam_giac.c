#include<stdio.h>
#include<math.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        double x[3], y[3];
        for(int i=0; i<3; i++){
            scanf("%lf %lf", &x[i], &y[i]);
        }

        double a, b, c, p, s;
        a=sqrt(pow(x[0]-x[1], 2)+pow(y[0]-y[1], 2));
        b=sqrt(pow(x[0]-x[2], 2)+pow(y[0]-y[2], 2));
        c=sqrt(pow(x[1]-x[2], 2)+pow(y[1]-y[2], 2));
        if(a>=b+c||b>=c+a||c>=a+b) printf("INVALID\n");
        else{
            p=(a+b+c)/2;
            s=sqrt(p*(p-a)*(p-b)*(p-c));
            printf("%0.2f\n", s); 
        }
    }
    return 0;
}