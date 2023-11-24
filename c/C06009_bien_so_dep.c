#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char s[]){
	int a[5]={s[6], s[7], s[8], s[10], s[11]};
	for(int i=0; i<5; i++){
		a[i]-=48;
	}

	if(a[0]<a[1]&&a[1]<a[2]&&a[2]<a[3]&&a[3]<a[4]) return 1;
	if(a[0]==a[1]&&a[1]==a[2]&&a[3]==a[4]) return 1;
	int cnt=0;
	for(int i=0; i<5; i++){
		if(a[i]==6||a[i]==8) ++cnt;
	}
	if(cnt==5) return 1;
	return 0;
}
int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s[20]; gets(s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
