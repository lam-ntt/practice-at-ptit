#include<bits/stdc++.h>
using namespace std;

int n, a[10005];
int mark[10005];

bool cmp(int a, int b){
	if(mark[a]!=mark[b]){
		return mark[a]>mark[b];
	}else{
		return a<b;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		for(int i=0; i<=10000; i++){
			mark[i]=0;
		}	
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			mark[a[i]]++;
		}
		
		sort(a, a+n, cmp);
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
