#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[40][40];

    for(int i=1; i<=n; i++){
        a[i][1]='@';
        for(int j=2; j<=i; j++){
            a[i][j]=a[i][j-1]+2;
        }
        for(int j=i+1; j<=2*i-1; j++){
            a[i][j]=a[i][j-1]-2;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}