#include<bits/stdc++.h>
using namespace std;

int n, k, cnt, a[105], A[105];

void readAndInit(){
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}

	for(int i=1; i<=k; i++){
		a[i]=i;
	}	
	cnt=0;
}

void check(){
	for(int i=2; i<=k; i++){
		if(A[a[i]]<A[a[i-1]]) return;
	}
	++cnt;
}

void gen(){
	while(1){
		check();
		int i=k;
		while(i>=1&&a[i]==n-k+i){
			a[i]=0;
			--i;
		}
		if(i==0){
			cout << cnt;
			return;
		}else{
			++a[i];
			for(int j=i+1; j<=n; j++){
				a[j]=a[j-1]+1;
			}
		}
	}
}

int main(){
	readAndInit();
	gen();
	return 0;
}
