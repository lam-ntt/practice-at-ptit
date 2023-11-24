#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, mark[10]={0}; 
		string tmp;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> tmp;
			for(int j=0; j<tmp.size(); j++){
				mark[tmp[j]-'0']++;
			}
		}
		
		for(int i=0; i<=9; i++){
			if(mark[i]!=0){
				cout << i << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
