#include<bits/stdc++.h>
using namespace std;

int pre(int arr[], int s){
	for(int i=0; i<s; i++){
		if(arr[i]==arr[s]){
			return 1;
		}
	}
	return 0;
}

int count(int arr[], int s, int n){
	int cnt=0;
	for(int i=0; i<n; i++){
		if(arr[i]==arr[s]){
			++cnt;
		}
	}
	return cnt;
}

int main(){
	int n=0, arr[10005];
	char k='0';
	
	while(k!='\n'){
		cin >> arr[n++];
		k=getchar();
	}
	
	for(int i=0; i<n; i++){
		if(pre(arr, i)==0){
			cout << arr[i] << " " << count(arr, i, n) << "\n";
		}
	}
	return 0;
}
