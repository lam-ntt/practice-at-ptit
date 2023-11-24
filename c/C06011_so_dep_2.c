#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char s[]){
	if(s[0]!='8'&&s[strlen(s)-1]!='8') return 0;
	
	for(int i=0; i<=strlen(s)/2; i++){
		if(s[i]!=s[strlen(s)-1-i]) return 0;
	}
	
	int sum=0;
	for(int i=0; i<strlen(s); i++){
		sum+=s[i]-48;
	}
	if(sum%10!=0) return 0;
	return 1;
}

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[503]; gets(s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
