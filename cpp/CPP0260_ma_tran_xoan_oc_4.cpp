#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int arr[25][25], a[405];
	for(int i=0; i<n*n; i++){
		cin >> a[i];
	}
	
	sort(a, a+n*n);

	int l=0, r=n-1, t=0, b=n-1;
	int cnt=0;
	while(1){
		for(int i=l; i<=r; i++){
			arr[t][i]=a[cnt++];
		}
		++t;
		if(l>r||t>b){
			break;
		}
		
		for(int i=t; i<=b; i++){
			arr[i][r]=a[cnt++];
		}
		--r;
		if(l>r||t>b){
			break;
		}
		
		for(int i=r; i>=l; i--){
			arr[b][i]=a[cnt++];
		}
		--b;
		if(l>r||t>b){
			break;
		}
		
		for(int i=b; i>=t; i--){
			arr[i][l]=a[cnt++];
		}
		++l;
		if(l>r||t>b){
			break;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
