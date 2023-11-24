#include<stdio.h>

int check(int a[], int n){
	int d=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0) ++d;
		else --d;
	}
	return d;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a[205], n=0;
		char c='r';
		while(c!='\n'){
			scanf("%d", &a[n++]);
			scanf("%c", &c);
		}
		
		if(n%2==0&&check(a, n)>0) printf("YES\n");
		else if(n%2==1&&check(a, n)<0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
