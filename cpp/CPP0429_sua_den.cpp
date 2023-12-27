#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
	int n, k , b; cin >> n >> k >> b;
	int tmp; 
	for(int i=0; i<b; i++){
		cin >> tmp;
		a[tmp-1]=1;
	}
	
	int res=0; tmp=0;
	for(int i=0; i<k; i++){
		if(a[i]==0){
			++tmp;
		}
	}
	res=tmp;
	
	for(int i=k; i<n; i++){
		if(a[i]==0){
			++tmp;
		}
		if(a[i-k]==0){
			--tmp;
		}
		if(res<tmp){
			res=tmp;
		}
	}
	
	cout << k-res << "\n";
	return 0;
}
