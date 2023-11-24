#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int r=1e9, c=1e9, x, y;
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(x<r) r=x;
        if(y<c) c=y;
    }
    printf("%lld", (long long)r*c);
    return 0;
}