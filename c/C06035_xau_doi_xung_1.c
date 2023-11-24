#include<stdio.h>
#include<string.h>

int check(char s[]){
    int len=strlen(s), cnt=0;
    for(int i=0; i<len/2; i++){
        if(s[i]!=s[len-i-1]) ++cnt;
    }
    if(cnt==1) return 1;
    if(cnt==0&&len%2==1) return 1;
    return 0;
}

int main(){
    int t; scanf("%d\n", &t);
    while(t--){
        char s[25]; gets(s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}