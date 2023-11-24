#include<stdio.h>

void read(int a[105][105], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void mul(int des[105][105], int a[105][105], int b[105][105], int n, int m, int p){
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            des[i][j]=0;
            for(int k=0; k<m; k++){
                des[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

void print(int a[105][105], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n, m, p, q; scanf("%d %d %d %d", &n, &m, &p, &q);
    int a[105][105], b[105][105], c[105][105];
    read(a, n, m);
    read(b, m, p);
    read(c, p, q);

    int ab[105][105], d[105][105];
    mul(ab, a, b, n, m, p);
    mul(d, ab, c, n, p, q);
    print(d, n, q);
    return 0;
}