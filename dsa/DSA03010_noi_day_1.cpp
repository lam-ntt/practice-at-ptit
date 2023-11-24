#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		priority_queue<int, vector<int>, greater<int>> pq;
		int n; cin >> n;
		int tmp;
		for(int i=0; i<n; i++){
			cin >> tmp;
			pq.push(tmp);
		}
		
		ll sum=0;
		while(pq.size()>1){
			int a=pq.top(); pq.pop();
			int b=pq.top(); pq.pop();
			sum+=(a+b);
			pq.push(a+b);
		}
		cout << sum << "\n";
		
	}
	return 0;
}
