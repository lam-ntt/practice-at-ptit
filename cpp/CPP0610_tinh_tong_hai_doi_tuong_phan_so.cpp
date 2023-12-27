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
		
		friend PhanSo operator +(PhanSo a, PhanSo b){
			PhanSo tong(0, 0);
			tong.tu=a.tu*b.mau+a.mau*b.tu;
			tong.mau=a.mau*b.mau;
			tong.rutgon();
			return tong;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
