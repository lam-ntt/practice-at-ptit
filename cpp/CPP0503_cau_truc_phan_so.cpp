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

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
