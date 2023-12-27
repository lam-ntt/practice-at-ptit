#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
	if(a>b){
		return a;
	}
	return b;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int arr[1005];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int min=100000, res=-1;
		for(int i=0; i<n; i++){
			if(arr[i]<min){
				min=arr[i];
			}else{
				res=max(res, arr[i]-min);
			}
		}
		
		cout << res << "\n";
	}
	return 0;
}
