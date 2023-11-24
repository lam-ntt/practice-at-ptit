#include<bits/stdc++.h>
using namespace std;

int main(){
	int c, n; cin >> c >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int s[c+1]={1};
	s[a[0]]=1;
	for(int i=1; i<n; i++){
		for(int j=c; j>=a[i]; j--){
			if(s[j-a[i]]) s[j]=1;
		}
	}
	int idx=c;
	while(s[idx]==0) --idx;
	cout << idx;
	return 0;
}
