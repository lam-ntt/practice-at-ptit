#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char s[]){
	for(int i=0; i<=strlen(s)/2; i++){
		if(s[i]!=s[strlen(s)-1-i]) return 0;
	}
	
	for(int i=0; i<strlen(s); i++){
		if(s[i]%2!=0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[504]; gets(s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
