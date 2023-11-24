#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[56]; gets(s);
		char *token=strtok(s, " ");
		char word[6][10]; int cnt=0;
		while(token!=NULL){
			strcpy(word[cnt++], token);
			token=strtok(NULL, " ");
		}
		
		for(int i=1; i<cnt; i++){
			word[i][0]=toupper(word[i][0]);
			for(int j=1; j<strlen(word[i]); j++){
				word[i][j]=tolower(word[i][j]);
			}
			printf("%s", word[i]);
			if(i!=cnt-1) printf(" ");
		}
		for(int j=0; j<strlen(word[0]); j++){
			word[0][j]=toupper(word[0][j]);
		}
		printf(", %s\n", word[0]);
	}
	return 0;
}
