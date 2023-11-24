#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[105][105];
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            a[i][j]=0;
        }
        for(int j=i+1; j<n; j++){
            a[i][j]=a[i][j-1]+1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}