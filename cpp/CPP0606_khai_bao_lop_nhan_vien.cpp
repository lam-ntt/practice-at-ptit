#include<bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		string code, name, sex, birth, add, tax, date;
	public:
		friend istream& operator >>(istream& in, NhanVien &a){
			a.code="00001";
			getline(in, a.name);
			in >> a.sex >> a.birth;
			in.ignore();
			getline(in, a.add);
			cin >> a.tax >> a.date;
			return in;
		}
		
		friend ostream& operator <<(ostream& out, NhanVien a){
			cout << a.code << " " << a.name << " "
				 << a.sex << " " << a.birth << " "
				 << a.add << " " << a.tax << " "
				 << a.date;
				 return out;
		}
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
