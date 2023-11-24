#include<stdio.h>
#include<string.h>

struct Word{
    char s[1005];
    int fre;
};
typedef struct Word word;

int n=0; word w[1005]; 

int find(char s[]){
    for(int i=0; i<n; i++){
        if(strcmp(w[i].s, s)==0) return i;
    }
    return -1;
}

int check(char s[]){
    int len=strlen(s);
    for(int i=0; i<len/2; i++){
        if(s[i]!=s[len-i-1]) return 0;
    }
    return 1;
}

int main(){
    char s[1005];
    while(scanf("%s", &s)!=-1){
        if(check(s)==0) continue;
        int pos=find(s);
        if(pos==-1){
            strcpy(w[n].s, s);
            w[n++].fre=1;
        }
        else ++w[pos].fre;
    }

    int idx=0;
    for(int i=0; i<n; i++){
        if(strlen(w[i].s)>strlen(w[idx].s)) idx=i;
    }
    for(int i=0; i<n; i++){
        if(strlen(w[i].s)==strlen(w[idx].s)) printf("%s %d\n", w[i].s, w[i].fre);
    }
    return 0;
}