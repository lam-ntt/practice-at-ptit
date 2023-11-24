#include<stdio.h>

int main(){
    long long n=0, tmp;
    while(scanf("%lld", &tmp)!=-1){
        if(tmp>n) n=tmp;
    }
    printf("%lld", n);
    return 0;
}