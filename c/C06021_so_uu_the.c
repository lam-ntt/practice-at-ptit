#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char s[]){
    if(s[0]=='0') return -1;
    for(int i=0; i<strlen(s); i++){
        if(s[i]<'0'||s[i]>'9') return -1;
    }

    int cnt=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]%2==0) ++cnt;
        else --cnt;
    }
    if(strlen(s)%2==0&&cnt>0) return 1;
    else if(strlen(s)%2==1&&cnt<0) return 1;
    else return 0;
}

int main(){
    int t; scanf("%d\n", &t);
    while(t--){
        char s[1005]; gets(s);
        if(check(s)==-1) printf("INVALID\n");
        else if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}