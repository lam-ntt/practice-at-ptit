#include<stdio.h>

char add(){
    static char c='a';
    return c++;
}

int main(){
    int n; scanf("%d", &n);
    int a[20][20];

    for(int i=1; i<=n; i++){
        if(i%2==1){
            for(int j=1; j<=i; j++){
                a[i][j]=add();
            }
        }else{
            for(int j=i; j>=1; j--){
                a[i][j]=add();
            }
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