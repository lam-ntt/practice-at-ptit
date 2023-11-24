#include<bits/stdc++.h>
using namespace std;

int n, a[105];
vector<string> res;

void save(int limit){
	string s="";
	for(int i=0; i<=limit; i++){
		s+=to_string(a[i]);
		s+=" ";
	}
	res.push_back(s);
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<n; i++){
		int j=i-1, min=a[i];
		while(j>=0&&a[j]>min){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=min;
		
		save(i);
	}
	
	for(int i=res.size()-1; i>=0; i--){
		cout << "Buoc " << i << ": " << res[i] << "\n";
	}
	return 0;
}
