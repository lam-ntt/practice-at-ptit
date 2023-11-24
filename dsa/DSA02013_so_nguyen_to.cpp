#include<bits/stdc++.h>
#define ll long long
#define MAX 50000
using namespace std;

int nt[MAX];

int checkPrime(int n){
	if(n<2){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void initSieve(){
	for(int i=1; i<MAX; i++){
		nt[i]=1;
	}
	nt[1]=0;
	
	for(int i=2; i<=sqrt(MAX); i++){
		if(checkPrime(i)){
			for(int j=2*i; j<MAX; j+=i){
				nt[j]=0;
			}
		}
	}
}

int n, k, p, s, a[15], A[100];
int cnt; vector<string> v;

void gen(){
	int tmp=1;
	for(int i=p+1; i<s; i++){
		if(nt[i]) A[tmp++]=i;
	}
	n=tmp-1;
}

void save(){
	++cnt;
	string s="";
	for(int i=1; i<=k; i++){
		s+=to_string(A[a[i]])+" ";
	}
	v.push_back(s);
}

void tryy(int i){
	for(int j=a[i-1]+1; j<=n; j++){
		a[i]=j; 
		s-=A[a[i]];
		if(i==k&&s==0) save();
		else if(i<k&&s>=0) tryy(i+1);
		s+=A[a[i]];
	}
}

int main(){
	initSieve();
	int t; cin >> t;
	while(t--){
		cin >> k >> p >> s;
		gen(); 
		if(n<k){
			cout << "0\n";
		}else{
			cnt=0; v.clear(); tryy(1);
			cout << cnt << "\n";
			sort(v.begin(), v.end());
			for(auto it: v){
				cout << it << "\n";
			}
		}
	}
	return 0;
}
