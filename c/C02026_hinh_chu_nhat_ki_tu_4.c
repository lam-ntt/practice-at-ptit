#include<stdio.h>

int main(){
    int r, c; scanf("%d %d", &r, &c);
    int a[20][20];

    if(r>c){
        for(int i=1; i<=r-c; i++){
            for(int j=1; j<=c; j++){
                printf("%c", 'A'+c-1);
            }
            printf("\n");
        }
        r=c;
    }

    for(int i=1; i<=c; i++){
        a[i][i]='A'+c-1;
        for(int j=i+1; j<=c; j++){
            a[i][j]=a[i][j-1];
        }
        for(int j=i-1; j>=1; j--){
            a[i][j]=a[i][j+1]-1;
        }
    }

    for(int i=c-r+1; i<=c; i++){
        for(int j=1; j<=c; j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}