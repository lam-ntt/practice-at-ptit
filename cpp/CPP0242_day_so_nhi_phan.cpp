#include<bits/stdc++.h>
using namespace std;

int check(int s, int dis, int a[], int b[]){
	int temp=0;
	for(int i=s; i<=s+dis; i++){
		temp+=(a[i]-b[i]);
	}
	if(temp==0){
		return 1;
	}
	return 0;
}

int find(int n, int a[], int b[]){
	for(int dis=n; dis>=0; dis--){
		for(int i=0; i+dis<n; i++){
			if(check(i, dis, a, b)){
				return dis+1;
			}
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[1005], b[1005];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		
		cout << find(n, a, b) << "\n";
	}
	return 0;
}
