#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, cnt, a[10000005];

void merge(int l, int m, int r){
	vector<ll> v1(a+l, a+m+1);
	vector<ll> v2(a+m+1, a+r+1);
	
	int i=0, j=0;
	while(i<v1.size()&&j<v2.size()){
		if(v1[i]<=v2[j]) a[l++]=v1[i++];
		else{
			cnt+=v1.size()-i;
			a[l++]=v2[j++];
		}
	}
	while(i<v1.size()) a[l++]=v1[i++];
	while(j<v2.size()) a[l++]=v2[j++];
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
		
		cnt=0;
		mergeSort(0, n-1);
		cout << cnt << "\n";
	}
	return 0;
}
