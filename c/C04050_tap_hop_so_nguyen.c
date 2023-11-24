#include<stdio.h>

void sort(int a[], int n){
    int idx, tmp;
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

void intersect(int a[], int b[], int n, int m){
    int i=0, j=0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            printf("%d ", a[i]);
            ++i; ++j;
        }
        else if(a[i]<b[j]) ++i;
        else ++j;
    }
    printf("\n");
}

void sub(int a[], int b[], int n, int m){
    int i=0, j=0;
    while(i<n&&j<m){
        if(a[i]==b[j]){
            ++i; ++j;
        }
        else if (a[i]<b[j]) printf("%d ", a[i++]);
        else j++;
    }
    while(i<n) printf("%d ", a[i++]);
    printf("\n");
}

int main(){
    int n, m; scanf("%d %d", &n, &m);
    int a[n], b[m], cnt[1005]={0};
    int tmp, idx=0;
    for(int i=0; i<n; i++){
        scanf("%d", &tmp);
        if(cnt[tmp]==0) a[idx++]=tmp;
        ++cnt[tmp];
    }
    n=idx; 
    idx=0;
    for(int i=1; i<=1000; i++) cnt[i]=0;
    for(int i=0; i<m; i++){
        scanf("%d", &tmp);
        if(cnt[tmp]==0) b[idx++]=tmp;
        ++cnt[tmp];
    }
    m=idx;

    sort(a, n);
    sort(b, m);

    intersect(a, b, n, m);
    sub(a, b, n, m);
    sub(b, a, m, n);
    return 0;
}