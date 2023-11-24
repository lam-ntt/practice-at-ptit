#include<stdio.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n, m, col; scanf("%d %d %d", &n, &m, &col);
        int a[105][105];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                scanf("%d", &a[i][j]);
            }
        }

        int idx, tmp;  --col;
        for(int i=0; i<n-1; i++){
            idx=i;
            for(int j=i+1; j<n; j++){
                if(a[j][col]<a[idx][col]) idx=j;
            }
            if(a[idx][col]<a[i][col]){
                tmp=a[i][col]; a[i][col]=a[idx][col]; a[idx][col]=tmp;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}