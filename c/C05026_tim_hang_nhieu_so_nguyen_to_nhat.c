#include<stdio.h>
#include<math.h>

int checkPrime(int n){
    if(n==0||n==1) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n; scanf("%d", &n);
    int a[30][30];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int row, res=-1, tmp;
    for(int i=0; i<n; i++){
        tmp=0;
        for(int j=0; j<n; j++){
            if(checkPrime(a[i][j])) ++tmp;
        }
        if(tmp>res){
            res=tmp;
            row=i;
        }
    }

    printf("%d\n", row+1);
    for(int j=0; j<n; j++){
        if(checkPrime(a[row][j])) printf("%d ", a[row][j]);
    }
    return 0;
}