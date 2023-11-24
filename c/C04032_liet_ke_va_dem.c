#include<stdio.h>

int check(int n){
	int i;
	while(n>0){
		i=n%10;
		n/=10;
		if(i<n%10) return 0;
	}
	return 1;
}

int fre(int a[], int n, int s){
	int cnt=0;
	for(int i=0; i<n; i++){
		if(a[i]==a[s]) ++cnt;
	}
	return cnt;
}

int pre(int a[], int n, int s){
	int cnt=0;
	for(int i=0; i<s; i++){
		if(a[i]==a[s]) return 1;
	}
	return 0;
}

int main(){
	int a[100005], n=0, c;
	while(scanf("%d", &c)!=-1){
		if(check(c)) a[n++]=c;
	}
	
	int tmp;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(fre(a, n, j)>fre(a, n, i)){
				tmp=a[i]; a[i]=a[j]; a[j]=tmp;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		if(pre(a, n, i)==0) printf("%d %d\n", a[i], fre(a, n, i));
	}
	return 0;
}
