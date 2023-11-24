#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[105], cnt=0;
    if(n==0){
        printf("0");
        return 0;
    }
    while(n!=0){
        a[cnt++]=n%2;
        n/=2;
    }
    for(int i=cnt-1; i>=0; i--){
        printf("%d", a[i]);
    }
    return 0;
}