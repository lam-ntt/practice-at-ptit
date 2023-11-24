#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int pre(char s[205][205], int n, char tmp[]){
    for(int i=0; i<n; i++){
        if(strcmp(s[i], tmp)==0) return 1;
    }
    return 0;
}

void sort(char s[205][205], int n){
    char tmp[205]; int idx;
    for(int i=0; i<n-1; i++){
        idx=i;
        for(int j=i+1; j<n; j++){
            if(strcmp(s[idx], s[j])>0) idx=j;
        }
        if(strcmp(s[i], s[idx])>0){
            strcpy(tmp, s[i]);
            strcpy(s[i], s[idx]);
            strcpy(s[idx], tmp);
        }
    }
}

int main(){
    int cnt; scanf("%d\n", &cnt);
    while(cnt--){
        char s[205], t[205]; gets(s); gets(t);
    
        char *token=strtok(s, " ");
        char w1[205][205]; int n=0;
        while(token!=NULL){
            if(pre(w1, n, token)==0) strcpy(w1[n++], token);
            token=strtok(NULL, " ");
        }
        token=strtok(t, " ");
        char w2[205][205]; int m=0;
        while(token!=NULL){
            if(pre(w2, m, token)==0) strcpy(w2[m++], token);
            token=strtok(NULL, " ");
        }

        sort(w1, n);

        for(int i=0; i<n; i++){
            int ok=1;
            for(int j=0; j<m; j++){
                if(strcmp(w1[i], w2[j])==0){
                    ok=0;
                    break;
                }
            }
            if(ok) printf("%s ", w1[i]);
        }
        printf("\n");
    }
    return 0;
}
