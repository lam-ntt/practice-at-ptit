#include<bits/stdc++.h>
#define ll long long
using namespace std;

int chia_du(int mu){
	if(mu==0){
		return 1;
	}
	int tmp=chia_du(floor(mu/2));
	if(mu%2==1){
		return (((tmp*tmp)%5)*2)%5;
	}
	return (tmp*tmp)%5;
	
}

int check(string s){
	int mu=0, sum=0;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]=='1'){
			sum+=chia_du(mu);
		}
		mu++;
	}
	return sum%5==0;
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		if(check(s)){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}
	return 0;
}
