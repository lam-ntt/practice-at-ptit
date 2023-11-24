#include<stdio.h>
#include<string.h>

void change(char s[]){
    if(strlen(s)%2==1){
        int len=strlen(s);
        s[len+1]='\0';
        for(int i=len-1; i>=0; i--){
            s[i+1]=s[i];
        }
        s[0]='0';
    }

    // partition
    char s1[105], s2[105];
    int n=0, len=strlen(s); 
    for(int i=len/2-1; i>=0; i--){
        s1[n++]=s[i];
    }
    s1[n++]='\0';
    n=0;
    for(int i=len-1; i>=len/2; i--){
        s2[n++]=s[i];
    }
    s2[n++]='\0';

    for(int i=0; i<=len; i++){
        s[i]='\0';
    }

    // find sum
    int carry=0, tmp;
    for(int i=0; i<len/2; i++){
        tmp=s1[i]+s2[i]-2*'0'+carry;
        carry=tmp/10;
        s[i]=tmp%10+'0';
    }
    len=len/2;
    if(carry!=0) s[len++]=carry+'0';

    // reverse
    char c;
    for(int i=0; i<len/2; i++){
        c=s[i]; s[i]=s[len-i-1]; s[len-i-1]=c;
    }
}

int main(){
    char s[205]; gets(s);
    while(strlen(s)!=1){
        change(s); 
        printf("%s\n", s, strlen(s));
    }
    return 0;
}