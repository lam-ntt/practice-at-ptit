#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char s[]){
	if(s[0]=='0') return -1;
	for(int i=0; i<strlen(s); i++){
		if(isdigit(s[i])==0) return -1;
	}
		
	int a[10]={0};
	for(int i=0; i<strlen(s); i++){
		++a[s[i]-48];
	}
	for(int i=0; i<10; i++){
		if(a[i]==0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[1004]; gets(s);
		if(check(s)==1) printf("YES\n");
		else if(check(s)==0) printf("NO\n");
		else printf("INVALID\n");
	}
	return 0;
}
