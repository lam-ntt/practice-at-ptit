#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
	ll tu, mau;
};

void rutgon(PhanSo &a){
	ll ucln=__gcd(a.tu, a.mau);
	a.tu/=ucln;
	a.mau/=ucln;
}

void process(PhanSo a, PhanSo b){
	PhanSo c, d;
	c.mau=a.mau*b.mau; 
	c.tu=a.tu*b.mau+a.mau*b.tu;
	rutgon(c);
	c.tu*=c.tu; c.mau*=c.mau;
	cout << c.tu << "/" << c.mau << " ";
	
	d.tu=a.tu*b.tu*c.tu;
	d.mau=a.mau*b.mau*c.mau;
	rutgon(d);
	cout << d.tu << "/" << d.mau << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
