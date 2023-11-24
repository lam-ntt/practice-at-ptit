#include<bits/stdc++.h>
using namespace std;

int n, a[20], A[20];
vector<string> v;

void save(){
	string s="";
	for(int i=1; i<=n; i++){
		if(a[i]) s+=to_string(A[i])+" ";
	}
	v.push_back(s);
}

void check(){
	int sum=0;
	for(int i=1; i<=n; i++){
		if(a[i]) sum+=A[i];
	}
	if(sum%2==1) save();
}

void tryy(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) check();
		else tryy(i+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> A[i];
		}
		sort(A+1, A+n+1, greater<int>());
		
		v.clear();
		tryy(1);
		for(auto it: v){
			cout << it << "\n";
		}
	}
	return 0;
}
