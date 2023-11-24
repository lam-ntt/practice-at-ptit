#include<stdio.h>
#include<string.h>

int convert(char s[]){
    int n=0;
    for(int i=0; i<strlen(s); i++){
        n=n*10+s[i]-'0';
    }
    return n;
}

int main(){
    int t; scanf("%d\n", &t);
    while(t--){
        int deg[10005]={0};
        char s[20005]; gets(s);
        char *token=strtok(s, "*x^ +");
        while(token!=NULL){
            int num=convert(token);
            token=strtok(NULL, "*x^ +");
            int base=convert(token);
            token=strtok(NULL, "*x^ +");
            deg[base]+=num;
        }
        gets(s);
        token=strtok(s, "*x^ +");
        while(token!=NULL){
            int num=convert(token);
            token=strtok(NULL, "*x^ +");
            int base=convert(token);
            token=strtok(NULL, "*x^ +");
            deg[base]+=num;
        }

        int idx;
        for(int i=0; i<=10000; i++){
            if(deg[i]!=0){
                idx=i; break;
            }
        }

        for(int i=10000; i>=0; i--){
            if(deg[i]!=0){
                printf("%d*x^%d", deg[i], i);
                if(i!=idx) printf(" + ");
            }
        }
        printf("\n");
    }
    return 0;
}