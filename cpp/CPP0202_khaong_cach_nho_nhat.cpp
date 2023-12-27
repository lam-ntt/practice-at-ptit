#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int arr[1005];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int temp;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(arr[j]<arr[i]){
					temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
				}
			}
		}
		
		int min=10000;
		for(int i=0; i<n-1; i++){
			if(abs(arr[i]-arr[i+1])<min){
				min=abs(arr[i]-arr[i+1]);
			}
		}
		
		cout << min << "\n";
	}
	return 0;
}
