#include<bits/stdc++.h>
using namespace std;

int max_(int arr[], int s, int f){
	int max=0;
	for(int i=s; i<=f; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int arr[10000005];

int main(){
	int test; cin >> test;
	while(test--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int max=max_(arr, 0, k-1);
		cout << max << " ";
		
		for(int i=k; i<n; i++){
			if(arr[i]>=max){
				max=arr[i];
			}else{
				if(max==arr[i-k]){
					max==max_(arr, i-k+1, i);
				}
			}
			cout << max << " ";
		}
		cout << "\n";
	}
	return 0;
}
