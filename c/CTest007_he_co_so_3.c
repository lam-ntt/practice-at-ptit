#include<stdio.h>
#include<string.h>

int check(char s[]){
    for(int i=0; i<strlen(s); i++){
        if(s[i]<'0'||s[i]>'2') return 0;
    }
    return 1;
}

int main(){
    int t; scanf("%d\n", &t);
    while(t--){
        char s[20]; gets(s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}