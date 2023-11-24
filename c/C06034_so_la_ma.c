#include<stdio.h>
#include<string.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        char s[1005]; scanf("%s", &s);
        int v[256]={0};
        v['I']=1, v['V']=5, v['X']=10, v['L']=50;
        v['C']=100, v['D']=500, v['M']=1000;
        int res=0;
        res+=v[s[strlen(s)-1]];
        for(int i=strlen(s)-2; i>=0; i--){
            if(v[s[i]]>=v[s[i+1]]) res+=v[s[i]];
            else res-=v[s[i]];
        }
        printf("%d\n", res);
    }
    return 0;
}