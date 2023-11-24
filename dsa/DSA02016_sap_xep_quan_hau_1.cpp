#include<bits/stdc++.h>
using namespace std;

int n, cnt, a[15];
map<int, int> mp, mp1, mp2;

void tryy(int i){
	for(int j=1; j<=n; j++){
		if(mp[j]==0&&mp1[i-j]==0&&mp2[i+j]==0){
			a[i]=j;
			mp[j]=1; mp1[i-j]=1; mp2[i+j]=1;
			if(i==n) ++cnt;
			else tryy(i+1);
			mp[j]=0; mp1[i-j]=0; mp2[i+j]=0;
		}
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		cnt=0;
		tryy(1);
		cout << cnt << "\n";
	}
}
