#include<bits/stdc++.h>
using namespace std;

int n, a[105];

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<n; i++){
		int j=i-1, min=a[i];
		while(j>=0&&a[j]>min){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=min;
		
		cout << "Buoc " << i << ": ";
		for(int j=0; j<=i; j++){
			cout << a[j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
