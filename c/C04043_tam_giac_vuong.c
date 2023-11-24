#include<stdio.h>

void sort(long long a[], int n){
    int idx; long long tmp;
    for(int i=0; i<n-1; i++){
        idx=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[idx]) idx=j;
        }
        if(a[idx]<a[i]){
            tmp=a[i]; a[i]=a[idx]; a[idx]=tmp;
        }
    }
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        long long a[n];
        for(int i=0; i<n; i++){
            scanf("%lld", &a[i]);
            a[i]*=a[i];
        }
        sort(a, n);

        int l, r, ok=0; 
        long long tmp;
        for(int i=n-1; i>=2; i--){
            l=0, r=i-1;
            while(l<r){
                tmp=a[l]+a[r];
                if(tmp==a[i]){
                    ok=1;
                    break;
                }
                else if(tmp<a[i]) ++l;
                else --r;
            }
        }
        if(ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}