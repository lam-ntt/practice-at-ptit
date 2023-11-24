#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, value, a[5000];
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cin >> value;
	
	for(int i=0; i<n; i++){
		if(a[i]!=value){
			cout << a[i] << " ";
		}
	}
	return 0;
}
