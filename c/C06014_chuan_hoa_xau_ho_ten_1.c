#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[85]; gets(s);
		char *token=strtok(s, " ");
		char word[40][15]; int cnt=0;
		while(token!=NULL){
			strcpy(word[cnt++], token);
			token=strtok(NULL, " ");
		}
		
		for(int i=0; i<cnt; i++){
			word[i][0]=toupper(word[i][0]);
			for(int j=1; j<strlen(word[i]); j++){
				word[i][j]=tolower(word[i][j]);
			}
			printf("%s ", word[i]);
		}
		printf("\n");
	}
	return 0;
}
