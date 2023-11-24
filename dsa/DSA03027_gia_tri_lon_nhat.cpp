#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int tmp; long long sum=0;
	for(int i=0; i<n; i++){
		cin >> tmp;
		if(tmp>0) sum+=tmp;
	}
	cout << 2*sum;
	return 0;
}

