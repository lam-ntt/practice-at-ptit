#include<bits/stdc++.h>
using namespace std;

int n, a[105];

void print(){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<n-1; i++){
		int idx=i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[idx]){
				idx=j;
			}
		}
		swap(a[i], a[idx]);
		cout << "Buoc " << i+1 << ": ";
		print();
	}
	return 0;
}
