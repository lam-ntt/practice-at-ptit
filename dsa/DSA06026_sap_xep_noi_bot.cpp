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
		int ok=0;
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
				ok=1;
			}
		}
		
		if(!ok) break;
		else{
			cout << "Buoc " << i+1 << ": ";
			print();
		}
	}
	return 0;
}
