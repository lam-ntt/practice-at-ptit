#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char s[55]; gets(s);
    char *token=strtok(s, " ");
    char word[10][10], n=0;
    while(token!=NULL){
        strcpy(word[n++], token);
        token=strtok(NULL, " ");
    }

    for(int i=0; i<n-1; i++){
        word[i][0]=tolower(word[i][0]);
        printf("%c", word[i][0]);
    }
    for(int i=0; i<strlen(word[n-1]); i++){
        word[n-1][i]=tolower(word[n-1][i]);
    }
    printf("%s@ptit.edu.vn", word[n-1]);
    return 0;
}