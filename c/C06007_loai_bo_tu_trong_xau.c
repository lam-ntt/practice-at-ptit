#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char s1[105], s2[50]; gets(s1); gets(s2);
	char *token=strtok(s1, " ");
	while(token!=NULL){
		if(strcmp(token, s2)!=0) printf("%s ", token);
		token=strtok(NULL, " ");
	}
	return 0;
}
