#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	int stt;
	string code, name, group, mail, doanhnghiep;
};

int cnt=1;
void nhap(SinhVien &a){
	a.stt=cnt++;
	cin.ignore();
	getline(cin, a.code);
	getline(cin, a.name);
	cin >> a.group >> a.mail >> a.doanhnghiep;
}

void in(SinhVien a){
	cout << a.stt << " " << a.code << " " 
		 << a.name << " " << a.group << " " 
		 << a.mail << " " << a.doanhnghiep << "\n";
}

int cmp(SinhVien a, SinhVien b){
	return a.name<b.name;
}

void lietke(SinhVien ds[], int n, string s){
	vector<SinhVien> v;
	for(int i=0; i<n; i++){
		if(ds[i].doanhnghiep==s){
			v.push_back(ds[i]);
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(auto i: v){
		in(i);
	}
}

int main(){
	int n; cin >> n;
	SinhVien ds[1005];
	for(int i=0; i<n; i++){
		nhap(ds[i]);
	}
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		lietke(ds, n, s);
	}
}
