#include<stdio.h>
#include<string.h>

char mx(char s[], int l, int r, char limit){
    char c=-1;
    for(int i=l; i<=r; i++){
        if(s[i]<limit&&s[i]>c) c=s[i];
    }
    return c;
}

int main(){
    char s[100005]; gets(s);
    char k='z'+1; int pos=0;
    while(1){
        k=mx(s, pos, strlen(s)-1, k);
        if(k==-1) break;
        else{
            for(int i=pos; i<strlen(s); i++){
                if(s[i]==k){
                    printf("%c", k);
                    pos=i;
                }
            }
            ++pos;
        }
    }
    return 0;
}