#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string code, name, sex, birth, add, tax, date;
};

void nhap(NhanVien &a){
	a.code="00001";
	getline(cin, a.name);
	cin >> a.sex >> a.birth;
	cin.ignore();
	getline(cin, a.add);
	cin >> a.tax >> a.date;
}

void in(NhanVien a){
	cout << a.code << " " << a.name << " "
		 << a.sex << " " << a.birth << " "
		 << a.add << " " << a.tax << " " << a.date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
