#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    double tmp, res=0;
    for(int i=0; i<n; i++){
        scanf("%lf", &tmp);
        res+=tmp;
    }
    printf("%0.3f", res/n);
    return 0;
}