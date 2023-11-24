#include<stdio.h>
#include<string.h>
#include<ctype.h>

int pre(char word[100][20], int n, int s){
	for(int i=0; i<s; i++){
		if(strcmp(word[i], word[s])==0) return 1;
	}
	return 0;
}

int fre(char word[100][20], int n, int s){
	int cnt=0;
	for(int i=0; i<n; i++){
		if(strcmp(word[i], word[s])==0) ++cnt;
	}
	return cnt;
}

int main(){
	char s[500]; gets(s);
	for(int i=0; i<strlen(s); i++){
		if(isupper(s[i])) s[i]+=32;
	}
	
	char *token=strtok(s, " ");
	char word[100][20]; int cnt=0;
	while(token!=NULL){
		strcpy(word[cnt++], token);
		token=strtok(NULL, " ");
	}
	
	for(int i=0; i<cnt; i++){
		if(pre(word, cnt, i)==0){
			printf("%s %d\n", word[i], fre(word, cnt, i));
		}
	}
	return 0;
}
