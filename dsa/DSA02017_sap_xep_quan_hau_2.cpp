#include<bits/stdc++.h>
using namespace std;

int a[10], A[10][10]; vector<int> v;
map<int, int> mp, mp1, mp2;

void save(){
	for(int i=1; i<=8; i++){
		v.push_back(a[i]);
	}
}

void tryy(int i){
	for(int j=1; j<=8; j++){
		if(mp[j]==0&&mp1[i-j]==0&&mp2[i+j]==0){
			a[i]=j;
			mp[j]=1; mp1[i-j]=1; mp2[i+j]=1;
			if(i==8) save();
			else tryy(i+1);
			mp[j]=0; mp1[i-j]=0; mp2[i+j]=0;
		}
	}
}

int main(){
	tryy(1);
	int t; cin >> t;
	while(t--){
		for(int i=1; i<=8; i++){
			for(int j=1; j<=8; j++){
				cin >> A[i][j];
			}
		}
		
		int sum=0, tmp=0;
		for(int i=0; i<v.size(); i++){
			tmp+=A[i%8+1][v[i]];
			if((i+1)%8==0){
				sum=max(sum, tmp);
				tmp=0;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
