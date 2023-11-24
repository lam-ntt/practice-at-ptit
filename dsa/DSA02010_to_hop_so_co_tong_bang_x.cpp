#include<bits/stdc++.h>
using namespace std;

int n, x, A[35];
vector<int> v;
vector<string> res;

void save(){
	string s="[";
	for(int i=0; i<v.size(); i++){
		s+=to_string(A[v[i]]);
		s+=" ";
	}
	s[s.size()-1]=']';
	res.push_back(s);
}

void tryy(int i){
	for(int j=1; j<=n; j++){
		if(v.size()==0||A[j]>=A[v[v.size()-1]]){
			v.push_back(j);
			x-=A[j];
			if(x==0) save();
			else if(x>=A[j]) tryy(i+1);
			x+=A[j];
			v.pop_back();
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		for(int i=1; i<=n; i++){
			cin >> A[i];
		}
		sort(A+1, A+n+1);
		
		v.clear(); res.clear();
		tryy(0);
		if(res.size()==0) cout << "-1\n";
		else{
			for(int i=0; i<res.size(); i++){
				cout << res[i];
			}
			cout << "\n";
		}
	}
	return 0;
}
