#include<bits/stdc++.h>
using namespace std;

void check(int m, int s){
	if(s==0||s>9*m){
		cout << "-1 -1";
		return ;
	}
	
	int n=s;
	vector<int> min, max;
	while(s>9){
		min.push_back(9);
		s-=9;
	}
	if(min.size()==m-1){
		min.insert(min.begin(), s);
	}else{
		min.insert(min.begin(), s-1);
		while(min.size()<m-1){
			min.insert(min.begin(), 0);
		}
		min.insert(min.begin(), 1);
	}
	
	
	while(n>9){
		max.push_back(9);
		n-=9;
	}
	max.push_back(n);
	while(max.size()<m){
		max.push_back(0);
	}
	
	for(auto it: min){
		cout << it;
	}
	cout << " ";
	for(auto it: max){
		cout << it;
	}
	
}

int main(){
	int m, s;
	cin >> m >> s;
	check(m, s);
	return 0;
}
