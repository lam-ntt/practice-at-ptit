#include<stdio.h>

int mn(int a, int b){
    if(a<b) return a;
    return b;
}

int main(){
    int r, c; scanf("%d %d", &r, &c);
    int a[20][20];

    for(int i=1; i<=mn(r, c); i++){
        a[i][c-i+1]='@'+c-1;
        for(int j=c-i; j>=1; j--){
            a[i][j]=a[i][j+1]-1;
        }
        for(int j=c-i+2; j<=c; j++){
            a[i][j]=a[i][j-1];
        }
    }

    for(int i=1; i<=mn(r, c); i++){
        for(int j=1; j<=c; j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    if(r>c){
        for(int i=1; i<=r-c; i++){
            for(int j=1; j<=c; j++){
                printf("%c", '@'+c-1);
            }
            printf("\n");
        }
    }
    return 0;
}