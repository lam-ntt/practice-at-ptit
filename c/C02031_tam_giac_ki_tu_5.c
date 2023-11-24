#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[20][20];

    for(int i=1; i<=n; i++){
        a[i][1]='@'+n-i;
        for(int j=2; j<=n-i+1; j++){
            a[i][j]=a[i][j-1]+1;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}