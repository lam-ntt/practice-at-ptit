#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, tmp;
	vector<int> odd, even;
	
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> tmp;
		if(i%2==1) odd.push_back(tmp);
		else even.push_back(tmp);
	}
	
	sort(odd.begin(), odd.end());
	sort(even.begin(), even.end(), greater<int>());
	int i=0, count=min(odd.size(), even.size());
	while(count--){
		cout << odd[i] << " " << even[i] << " ";
		++i;
	}
	if(i==odd.size()-1) cout << odd[i];
	return 0;
}
