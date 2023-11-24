#include<bits/stdc++.h>
using namespace std;

int digit=2, a[10], mark[10]={0};
vector<int> v;

void check(){
	int num=0;
	for(int i=0; i<digit; i++) num=num*10+a[i];
	v.push_back(num);
}

void tryy(int i){
	for(int j=0; j<=5; j++){
		if(mark[j]==0){
			a[i]=j;
			mark[j]=1;
			if(i==digit-1) check();
			else tryy(i+1);
			mark[j]=0;
		}
	}
}

int main(){
	for(int i=0; i<=5; i++) v.push_back(i);
	while(digit<=5){
		for(int j=1; j<=5; j++){
			a[0]=j;
			mark[j]=1;
			tryy(1);
			mark[j]=0;
		}
		++digit;
	}
	
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		auto it1=lower_bound(v.begin(), v.end(), l);
		auto it2=upper_bound(v.begin(), v.end(), r);
		cout << it2-it1 << "\n";
	}
	return 0;
}
