#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int cnt, a[25];

void init(){
	cnt=0;
	a[0]=n+1;
}

void tryy(int i){
	for(int j=a[i-1]-1; j>=1; j--){
		a[i]=j;
		s-=a[i];
		if(i==k&&s==0) ++cnt;
		else if(s>0) tryy(i+1);
		s+=a[i];
	}
}

int main(){
	while(1){
		cin >> n >> k >> s;
		if(n==0&&k==0&&s==0) return 0;
		else{
			init();
			tryy(1);
			cout << cnt << "\n";
		}
	}
}
