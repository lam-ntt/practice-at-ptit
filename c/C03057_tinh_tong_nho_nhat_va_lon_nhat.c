#include<stdio.h>
#include<math.h>
#include<string.h>

long long conversion(char str[]){
	long long n=0;
	int d=strlen(str);
	for(int i=0; i<d; i++){
		n=n*10+str[i]-'0';
	}
	return n;
}

long long min(long long n){
	long long n_copy=n;
	int i=0;
	while(n>0){
		if(n%10==6) n_copy-=(long long)pow(10, i);
		++i;
		n/=10;
	}
	return n_copy;
}

long long max(long long n){
	long long n_copy=n;
	int i=0;
	while(n>0){
		if(n%10==5) n_copy+=(long long)pow(10, i);
		++i;
		n/=10;
	}
	return n_copy;
}

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char str[100];
		gets(str);
		int cnt=0;
		for(int i=0; i<strlen(str); i++){
			if(str[i]==' '){
				++cnt;
			}
		}
		
		char *token=strtok(str, " ");
		char word[2][20]; int j=0;
		while(token!=NULL){
			strcpy(word[j++], token);
			token=strtok(NULL, " ");
		}
		
		long long a=conversion(word[0]);
		long long b=conversion(word[1]);
		printf("%lld", min(a)+min(b));
		for(int i=0; i<cnt; i++) printf(" ");
		printf("%lld\n", max(a)+max(b));
	}
	return 0;
}
