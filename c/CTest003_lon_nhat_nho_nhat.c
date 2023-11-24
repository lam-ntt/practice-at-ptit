#include<stdio.h>

int main(){
    long long mx=0, mn=1e18, tmp;
    while(scanf("%lld", &tmp)!=-1){
        if(tmp>mx) mx=tmp;
        if(tmp<mn) mn=tmp;
    }
    printf("%lld %lld", mx, mn);
    return 0;
}