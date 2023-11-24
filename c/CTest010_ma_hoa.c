#include<stdio.h>
#include<string.h>

int main(){
    int t; scanf("%d\n", &t);
    while(t--){
        char s[1005]; gets(s);
        int cnt=0;
        for(int i=0; i<strlen(s); i++){
            ++cnt;
            if(i==strlen(s)-1||s[i+1]!=s[i]){
                printf("%c%d", s[i], cnt);
                cnt=0;
            }
        }
        printf("\n");
    }
    return 0;
}