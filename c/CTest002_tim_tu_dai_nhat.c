#include<stdio.h>
#include<string.h>

int main(){
    char s[105], tmp[105];
    while(scanf("%s", &tmp)!=-1){
        if(strlen(tmp)>strlen(s)) strcpy(s, tmp);
    }
    printf("%s - %d", s, strlen(s));
    return 0;
}