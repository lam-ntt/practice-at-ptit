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
			int ok=0;
			for(int j=0; j<n-1; j++){
				if(a[j]>a[j+1]){
					swap(a[j], a[j+1]);
					ok=1;
				}
			}
			
			if(!ok) break;
			else save();
		}
		
		for(int i=res.size()-1; i>=0; i--){
			cout << "Buoc " << i+1 << ": " << res[i] << "\n";
		}
	}
	return 0;
}
