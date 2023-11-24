#include<stdio.h>
#include<math.h>
#include<string.h>

int roltate(char s[], char tmp[]){
    int len=strlen(s), cnt=0; char c;
    while(cnt<len){
        if(strcmp(s, tmp)==0) return cnt;
        ++cnt;
        c=tmp[0];
        for(int i=0; i<len-1; i++){
            tmp[i]=tmp[i+1];
        }
        tmp[len-1]=c;
    }
    return -1;
}

int main(){
    int n; scanf("%d", &n);
    int a[55]={0};
    char s[55], tmp[55]; scanf("%s", &s);
    for(int i=1; i<n; i++){
        scanf("%s", tmp);
        a[i]=roltate(s, tmp);
        if(a[i]==-1){
            printf("-1");
            return 0;
        }
    }

    int mn=1e9, cnt, len=strlen(s);
    for(int i=0; i<n; i++){
        cnt=0;
        for(int j=0; j<n; j++){
            if(a[j]>=a[i]) cnt+=(a[j]-a[i]);
            else cnt+=(len-(abs(a[j]-a[i])));
        }
        if(cnt<mn) mn=cnt;
        if(mn==0) break;
    }
    printf("%d", mn);
    return 0;
}