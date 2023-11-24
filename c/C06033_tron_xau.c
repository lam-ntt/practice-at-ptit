#include<stdio.h>
#include<string.h>

void check(char s1[], char s2[], char s[]){
    int n=0;
    for(int i=0; i<strlen(s1); i++){
        s[n++]=s2[i];
        s[n++]=s1[i];
    }
    s[n++]='\0';

    n=0;
    for(int i=0; i<strlen(s)/2; i++){
        s1[i]=s[n++];
    }
    s1[strlen(s)/2]='\0';
    for(int i=0; i<strlen(s)/2; i++){
        s2[i]=s[n++];
    }
    s2[strlen(s)/2]='\0';
}

int main(){
    while(1){
        int n; scanf("%d\n", &n);
        if(n==0) break;

        char s1[205], s2[205], s[410];
        gets(s1); gets(s2); gets(s);
        char fi[410], tmp[410], cnt=1;
        check(s1, s2, fi);

        while(1){
            ++cnt;
            check(s1, s2, tmp);
            if(strcmp(fi, tmp)==0){
                printf("-1\n");
                break;
            }else if(strcmp(s, tmp)==0){
                printf("%d\n", cnt);
                break;
            }
        }
    }
    return 0;
}