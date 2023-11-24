#include<bits/stdc++.h>
using namespace std;

int n, a[15];
vector<string> res;

void save(int len){
	string s="(";
	for(int i=1; i<=len; i++){
		s+=to_string(a[i]);
		s+=" ";
	}
	s[s.size()-1]=')';
	res.push_back(s);
}

void tryy(int i, int s){
	for(int j=s; j>=1; j--){
		if(j<=a[i-1]){
			a[i]=j;
			s-=j;
			if(s==0) save(i);
			else if(s>0) tryy(i+1, s);
			s+=j;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		a[0]=n;
		res.clear();
		tryy(1, n);
		
		cout << res.size() << "\n";
		for(auto it: res){
			cout << it << " ";
		}
		cout << "\n";
	}
	return 0;
}