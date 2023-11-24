#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    int t; scanf("%d\n", &t);
    int j=1;
    while(t--){
        char s1[250], s2[25]; gets(s1); gets(s2);
        for(int i=0; i<strlen(s2); i++){
            s2[i]=tolower(s2[i]);
        }

        printf("Test %d: ", j++);
        char *token=strtok(s1, " ");
        char tmp[25];
        while(token!=NULL){
            if(strcasecmp(token, s2)!=0) printf("%s ", token);
            token=strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}