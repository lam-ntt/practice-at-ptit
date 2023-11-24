#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];

int main(){
	int n; cin >> n; 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) a[i][j]=0;
	}
	string s, tmp;
	cin.ignore();
	for(int i=1; i<=n; i++){
		getline(cin, s);
		stringstream ss(s);
		while(ss>>tmp){
			int num=stoi(tmp);
			a[i][num]=1;
			a[num][i]=1;
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
