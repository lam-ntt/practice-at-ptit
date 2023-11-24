#include<stdio.h>
#include<string.h>

int main(){
    char s[60]; gets(s);
    int p1[256]={0}, p2[256]={0};
    for(int i=0; i<52; i++){
        if(p1[s[i]]==0) p1[s[i]]=i+1;
        else p2[s[i]]=i+1;
    }

    int cnt=0;
    for(int i='A'; i<='Y'; i++){
        for(int j=i+1; j<='Z'; j++){
            if(p1[i]<p1[j]&&p1[j]<p2[i]&&p2[i]<p2[j]) ++cnt;
            if(p1[j]<p1[i]&&p1[i]<p2[j]&&p2[j]<p2[i]) ++cnt;
        }
    }
    printf("%d", cnt);
    return 0;
}