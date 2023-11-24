#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int t[n], d[n];
    for(int i=0; i<n; i++){
        scanf("%d %d", &t[i], &d[i]);

    }

    int idx, tmp;
    for(int i=0; i<n-1; i++){
        idx=i;
        for(int j=i+1; j<n; j++){
            if(t[j]<t[idx]) idx=j;
        }
        if(t[idx]!=t[i]){
            tmp=t[i]; t[i]=t[idx]; t[idx]=tmp;
            tmp=d[i]; d[i]=d[idx]; d[idx]=tmp;
        }
    }

    int res=0;
    for(int i=0; i<n; i++){
        if(t[i]>res) res=t[i];
        res+=d[i];
    }
    printf("%d", res);
    return 0;
}