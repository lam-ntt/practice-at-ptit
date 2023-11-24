#include<stdio.h>

int a[1005][1005];

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n, m; scanf("%d %d\n", &n, &m);
        char s[1005];
        for(int i=0; i<n; i++){
            gets(s);
            for(int j=0; j<m; j++){
                a[i][j]=s[j]-'0';
            }
        }

        int row[n][3], col[m][3];
        for(int i=0; i<n; i++){
            for(int j=0; j<3; j++){
                row[i][j]=0;
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<3; j++){
                col[i][j]=0;
            }
        }


        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]!=0){
                    row[i][a[i][j]]+=1;
                    col[j][a[i][j]]+=1;
                }
            }
        }

        long long cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==1) cnt+=row[i][2]*col[j][2];
                if(a[i][j]==2) cnt+=row[i][1]*col[j][1];
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}