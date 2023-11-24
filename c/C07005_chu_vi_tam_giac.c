#include<stdio.h>
#include<math.h>

double check(double x[], double y[]){
    double a, b, c;
    a=sqrt(pow(x[0]-x[1], 2)+pow(y[0]-y[1], 2));
    b=sqrt(pow(x[0]-x[2], 2)+pow(y[0]-y[2], 2));
    c=sqrt(pow(x[1]-x[2], 2)+pow(y[1]-y[2], 2));

    if(a>=b+c||b>=c+a||c>=a+b) return -1;
    return a+b+c;
}


int main(){
    int t; scanf("%d", &t);
    while(t--){
        double x[3], y[3];
        for(int i=0; i<3; i++){
            scanf("%lf %lf", &x[i], &y[i]);
        }
        double c=check(x, y);
        if(c==-1) printf("INVALID\n");
        else printf("%0.3f\n", c); 
    }
    return 0;
}