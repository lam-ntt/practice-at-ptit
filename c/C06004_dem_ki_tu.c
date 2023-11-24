#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char s[500]; gets(s);
	int cnt1=0, cnt2=0, cnt3;
	for(int i=0; i<strlen(s); i++){
		if(islower(s[i])||isupper(s[i])) ++cnt1;
		else if(isdigit(s[i])) ++cnt2;
		else ++cnt3;
	}
	printf("%d %d %d", cnt1, cnt2, cnt3);
	return 0;
}
