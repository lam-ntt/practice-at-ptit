#include<bits/stdc++.h>
using namespace std;

int n, k, a[20], A[20];
vector<string> v;

void save(){
	string s="";
	for(int i=1; i<=k; i++){
		s+=to_string(A[a[i]])+" ";
	}
	v.push_back(s);
}

void tryy(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k) save();
		else tryy(i+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=n; i++){
			cin >> A[i];
		}
		sort(A+1, A+n+1);
		
		v.clear(); tryy(1);
		for(auto it: v){
			cout << it << "\n";
		}
	}
	return 0;
}
