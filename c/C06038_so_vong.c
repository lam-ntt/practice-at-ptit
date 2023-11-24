#include<stdio.h>
#include<string.h>

void mul(char s[], int n, char res[]){
    int carry=0;
    for(int i=strlen(s)-1; i>=0; i--){
        int tmp=(s[i]-'0')*n+carry;
        carry=tmp/10;
        res[i]=tmp%10+'0';
    }
    res[strlen(s)]='\0';
}

void roltate(char s[]){
    char k=s[0];
    for(int i=1; i<strlen(s); i++){
        s[i-1]=s[i];
    }
    s[strlen(s)-1]=k;
}

int check(char s[], char tmp[]){
    for(int i=1; i<=strlen(s); i++){
        if(strcmp(s, tmp)==0) return 1;
        roltate(tmp);
    }
    return 0;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        char s[65]; scanf("%s", &s);
        int n=strlen(s);

        char tmp[65], ok=1;
        for(int i=2; i<=n; i++){
            mul(s, i, tmp);
            if(check(s, tmp)==0){
                ok=0;
                break;
            }
        }
        if(ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}