#include<bits/stdc++.h>
#define ll long long 
using namespace std;

struct PhanSo{
	ll tu, mau;
};

void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}

void in(PhanSo a){
	cout << a.tu << "/" << a.mau;
}

void rutgon(PhanSo &a){
	ll ucln=__gcd(a.tu, a.mau);
	a.tu/=ucln;
	a.mau/=ucln;
}

PhanSo tong(PhanSo a, PhanSo b){
	PhanSo tong1;
	tong1.mau=a.mau*b.mau;
	tong1.tu=a.tu*b.mau+b.tu*a.mau;
	rutgon(tong1);
	return tong1;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
