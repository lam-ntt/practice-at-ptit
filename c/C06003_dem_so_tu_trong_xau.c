#include<stdio.h>
#include<string.h>

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[205]; gets(s);
		char *token=strtok(s, " ");
		int cnt=0;
		while(token!=NULL){
			++cnt;
			token=strtok(NULL, " ");
		}
		printf("%d\n", cnt);
	}
	return 0;
}
