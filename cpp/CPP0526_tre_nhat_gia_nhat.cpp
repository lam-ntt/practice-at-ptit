#include<bits/stdc++.h>
using namespace std;

struct Nguoi{
	string name, birth;
};

void nhap(Nguoi &a){
	cin.ignore();
	cin >> a.name >> a.birth;
}

void in(Nguoi a){
	cout << a.name << "\n";
}

int cmp(Nguoi a, Nguoi b){
	string s1;
	stringstream ss(a.birth);
	vector<string> v;
	while(getline(ss, s1, '/')){
		v.push_back(s1);
	}
	s1=v[2]+v[1]+v[0];
	
	string s2;
	stringstream sss(b.birth);
	v.clear();
	while(getline(sss, s2, '/')){
		v.push_back(s2);
	}
	s2=v[2]+v[1]+v[0];
	return s1<s2;
}

void check(Nguoi ds[], int n){
	sort(ds, ds+n, cmp);
	in(ds[n-1]); in(ds[0]); 
}

int main(){
	int n; cin >> n;
	Nguoi ds[105];
	for(int i=0; i<n; i++){
		nhap(ds[i]);
	}
	check(ds, n);
	return 0;
}
