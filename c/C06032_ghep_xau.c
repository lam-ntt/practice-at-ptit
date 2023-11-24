#include<stdio.h>
#include<string.h>

int check(char s1[], char s2[]){
    char tmp1[30]; 
    strcpy(tmp1, s1);
    strcat(tmp1, s2);
    char tmp2[30]; 
    strcpy(tmp2, s2);
    strcat(tmp2, s1);
    if(strcmp(tmp1, tmp2)>0) return 1;
    return 0;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        char word[10][30];
        for(int i=0; i<n; i++){
            scanf("%s", &word[i]);
        }

        char tmp[30];
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(check(word[i], word[j])){
                    strcpy(tmp, word[i]);
                    strcpy(word[i], word[j]);
                    strcpy(word[j], tmp);
                }
            }
        }

        for(int i=0; i<n; i++){
            printf("%s", word[i]);
        }
        printf("\n");
    }
    return 0;
}