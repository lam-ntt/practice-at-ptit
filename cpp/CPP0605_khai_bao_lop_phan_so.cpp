#include<bits/stdc++.h>
#define ll long long
using namespace std;

class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu, ll mau){
			this->tu=tu;
			this->mau=mau;
		}
		
		friend istream& operator >>(istream& in, PhanSo &a){
			in >> a.tu >> a.mau;
			return in;
		}
		friend ostream& operator <<(ostream& out, PhanSo a){
			out << a.tu << "/" << a.mau;
			return out;
		}
		
		void rutgon(){
			ll ucln=__gcd(tu, mau);
			tu/=ucln;
			mau/=ucln;
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
