#include<stdio.h>

char add(){
    static char c='A';
    return c++;
}

int main(){
    int n; scanf("%d", &n);
    int a[20][20];

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            a[j][i]=add();
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}