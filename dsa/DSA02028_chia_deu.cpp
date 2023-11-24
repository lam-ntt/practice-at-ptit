#include<bits/stdc++.h>
using namespace std;

int n, k, A[15], a[15], cnt=0, mid;

void check(){
	int tmp=0, cur=1;
	for(int i=1; i<=n; i++){
		tmp+=A[i];
		if(cur>k-1) break;
		if(i==a[cur]){
			if(tmp!=mid) return;
			tmp=0; ++cur;
		}
	}
	++cnt;
}

void tryy(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k-1) check();
		else tryy(i+1);
	}
}

int main(){
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		cin >> A[i];
		mid+=A[i];
	}
	if(k>n||abs(mid)%k!=0) cout << "0";
	else if(k==1) cout << "1";
	else{
		mid/=k;
		a[0]=0;
		tryy(1);
		cout << cnt;
	}
	return 0;
}
