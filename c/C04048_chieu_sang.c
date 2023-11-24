#include<stdio.h>

int main(){
    int n, m, k; scanf("%d %d %d", &n, &m, &k);
    int a[1005]={0}, tmp;
    for(int i=0; i<m; i++){
        scanf("%d", &tmp);
        int start=tmp-k, end=tmp+k;
        if(start<1) start=1;
        if(end>n) end=n;
        for(int j=start; j<=end; j++){
            a[j]=1;
        }
    }

    int res=0, cnt;
    for(int i=1; i<=n; i++){
        if(a[i]) continue;
        cnt=0;
        while(a[i]==0&&i<=n){
            ++cnt; ++i;
        }
        --i;
        res+=cnt/(2*k+1);
        if(cnt%(2*k+1)!=0) res+=1;
    }
    printf("%d", res);
    return 0;
}