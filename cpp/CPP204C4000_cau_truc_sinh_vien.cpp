#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string code, name, group, birth;
	float score;
};

void chuanhoa(string &s){
	if(s[1]=='/'){
		s.insert(0, "0");
	}
	if(s[4]=='/'){
		s.insert(3, "0");
	}
}

void nhapThongTinSV(SinhVien &a){
	a.code="N20DCCN001";
	getline(cin, a.name);
	cin >> a.group >> a.birth >> a.score;
	chuanhoa(a.birth);
}

void inThongTinSV(SinhVien a){
	cout << a.code << " " << a.name << " " 
	     << a.group << " " << a.birth << " "
		 << fixed << setprecision(2) << a.score;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
	return 0;
}
