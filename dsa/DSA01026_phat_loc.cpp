#include<bits/stdc++.h>
using namespace std;

int n, a[20];

void readAndInit(){
	cin >> n;
	a[1]=8;
	for(int i=2; i<=n; i++){
		a[i]=6;
	}
}

void check(){
	if(a[n]==8) return;
	int cnt6=0, cnt8=0, count6=-1, count8=-1;
	for(int i=1; i<=n; i++){
		if(a[i]==6){
			++cnt6;
			cnt8=0;
		}else{
			++cnt8;
			cnt6=0;
		}
		count6=max(count6, cnt6);
		count8=max(count8, cnt8);
	}
	if(count6>=4||count8>=2) return;
	
	for(int i=1; i<=n; i++){
		cout << a[i];
	}
	cout << "\n";
}

void gen(){
	while(1){
		check();
		int i=n;
		while(i>=2&&a[i]==8){
			a[i]=6;
			--i;
		}
		if(i==1) return;
		else a[i]=8;
	}
}

int main(){
	readAndInit();
	gen();
}
