#include<bits/stdc++.h>
using namespace std;

int n, a[105];
vector<string> res;

void save(){
	string s="";
	for(int i=0; i<n; i++){
		s+=to_string(a[i]);
		s+=" ";
	}
	res.push_back(s);
}

int main(){
	int t; cin >> t;
	while(t--){
		res.clear();
		
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[j]<a[i]){
					swap(a[i], a[j]);
				}
			}
			
			save();
		}
		
		for(int i=res.size()-1; i>=0; i--){
			cout << "Buoc " << i+1 << ": " << res[i] << "\n";
		}
	}
	return 0;
}
