#include<stdio.h>
#include<string.h>
#include<ctype.h>

void daoXau(char str[]){
	char d;
	int n=strlen(str);
	for(int i=0; i<n/2; i++){
		d=str[i]; str[i]=str[n-1-i]; str[n-1-i]=d;
	}
}

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s1[503], s2[503];
		gets(s1); gets(s2);
		
		char str[505];
		if(strlen(s1)<strlen(s2)){
			strcpy(str, s1);
			strcpy(s1, s2);
			strcpy(s2, str);
		}
		
		daoXau(s1); 
		daoXau(s2);
		
		int carry=0;
		int a[505]={0}, cnt=0;
		for(int i=0; i<strlen(s1); i++){
			if(i<strlen(s2)){
				a[cnt++]=(s1[i]+s2[i]-48*2+carry)%10;
				carry=(s1[i]+s2[i]-48*2+carry)/10;
			}else{
				a[cnt++]=(s1[i]+carry-48)%10;
				carry=(s1[i]+carry-48)/10;
			}
		}
		
		if(carry!=0) printf("%d", carry);
		for(int i=cnt-1; i>=0; i--){
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}
