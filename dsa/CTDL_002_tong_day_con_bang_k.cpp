#include<bits/stdc++.h>
using namespace std;

int n, k, cnt, a[25], A[25];

void readAndInit(){
	cin >> n >> k;
	for(int i=1; i<=k; i++){
		cin >> A[i];
	}

	cnt=0;
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void check(){
	int sum=0;
	for(int i=1; i<=n; i++){
		if(a[i]) sum+=A[i];
	}

	if(sum==k){
		++cnt;
		for(int i=1; i<=n; i++){
			if(a[i]) cout << A[i] << " ";
		}
		cout << "\n";
	}
}

void gen(){
	while(1){
		check();
		int i=n;
		while(i>=1&&a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==0){
			cout << cnt << "\n";
			return;
		}
		else a[i]=1;
	}
}

int main(){
	readAndInit();
	gen();
	return 0;
}
