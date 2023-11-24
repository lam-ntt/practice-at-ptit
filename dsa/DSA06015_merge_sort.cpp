#include<bits/stdc++.h>
using namespace std;

int n, a[1000005];

void merge(int l, int m, int r){
	vector<int> v1, v2;
	for(int i=l; i<=m; i++) v1.push_back(a[i]);
	for(int i=m+1; i<=r; i++) v2.push_back(a[i]);

	int i=0, j=0, cnt=l;
	while(i<v1.size()&&j<v2.size()){
		if(v1[i]==v2[j]){
			a[cnt++]=v1[i++];
			a[cnt++]=v2[j++];
		}else if(v1[i]<v2[j]) a[cnt++]=v1[i++];
		else a[cnt++]=v2[j++];
	}
	while(i<v1.size()) a[cnt++]=v1[i++];
	while(j<v2.size()) a[cnt++]=v2[j++];
}

void mergeSort(int l, int r){
	if(l>=r) return;
	int m=(l+r)/2;
	mergeSort(l, m);
	mergeSort(m+1, r);
	merge(l, m, r);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		mergeSort(0, n-1);
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
