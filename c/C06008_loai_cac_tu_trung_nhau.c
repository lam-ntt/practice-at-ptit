#include<stdio.h>
#include<string.h>
#include<ctype.h>

int pre(char word[100][50], int s){
	for(int i=0; i<s; i++){
		if(strcmp(word[i], word[s])==0) return 1;
	}
	return 0;
}

int main(){
	char s[104]; gets(s);
	char *token=strtok(s, " ");
	char word[100][50]; int cnt=0;
	while(token!=NULL){
		strcpy(word[cnt++], token);
		if(pre(word, cnt-1)==0) printf("%s ", word[cnt-1]);
		token=strtok(NULL, " ");
	}
	return 0;
}
