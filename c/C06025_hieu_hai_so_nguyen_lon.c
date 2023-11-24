#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int compare(char s1[], char s2[]){
	if(strlen(s1)<strlen(s2)) return 1;
	else if(strlen(s1)>strlen(s2)) return 0;
	
	for(int i=0; i<strlen(s1); i++){
		if(s1[i]<s2[i]) return 1;
	}
	return 0;
}

void daoXau(char str[]){
	char d; 
	for(int i=0; i<strlen(str)/2; i++){
		d=str[i]; str[i]=str[strlen(str)-1-i]; str[strlen(str)-1-i]=d;
	}
}

int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		char s1[1004], s2[1004];
		gets(s1); gets(s2);
		
		char str[1004];
		if(compare(s1, s2)){
			strcpy(str, s1);
			strcpy(s1, s2);
			strcpy(s2, str);
		}
		
		daoXau(s1); 
		daoXau(s2);
		
		int a[1004]={0}, muon=0, cnt=0;
		for(int i=0; i<strlen(s1); i++){
			if(i<strlen(s2)){
				if(s1[i]>=s2[i]+muon){
					a[cnt++]=(s1[i]-s2[i]-muon);
					muon=0;
				}else{
					a[cnt++]=(s1[i]-s2[i]+10-muon);
					muon=1;
				}
			}else{
				if(s1[i]-48>=muon){
					a[cnt++]=(s1[i]-48-muon);
					muon=0;
				}else{
					a[cnt++]=(s1[i]-48+10-muon);
					muon=1;
			   }
		   }
		}
		
		int d;
			for(int i=cnt-1; i>=0; i--){
				if(a[i]>0){
					d=i;
					break;
				}
			}
			for(int i=d; i>=0; i--){
				printf("%d", a[i]);
			}
			printf("\n");	
	}
	return 0;
}
