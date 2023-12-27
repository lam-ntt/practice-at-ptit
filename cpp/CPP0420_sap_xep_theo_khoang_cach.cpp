#include<bits/stdc++.h>
using namespace std;

int a[100005];
int k;

int cmp(const int a,const  int b){
	if(abs(k-a)!=abs(k-b)){
		return abs(k-a)<abs(k-b);
	}else{
		return 0;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n >> k;
		for(int i=0; i<n ; i++){
			cin >> a[i];
		}
		sort(a, a+n, cmp);
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
