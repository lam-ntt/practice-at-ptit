#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string code, name, group, mail;
	public:
		friend istream& operator >>(istream& in, SinhVien &a){
			in >> a.code;
			in.ignore();
			getline(in, a.name);
			in >> a.group >> a.mail;
			return in;
		}
		
		friend ostream& operator <<(ostream& out, SinhVien a){
			out << a.code << " " << a.name << " "
				<< a.group << " " << a.mail << "\n";
			return out;
		}
		
		friend int operator <(SinhVien a, SinhVien b){
			return a.code<b.code;
		}
};

int main(){
	int n=0;
	SinhVien ds[1005];
	while(cin >> ds[n++])
	sort(ds, ds+n);
	for(int i=0; i<n; i++){
		cout << ds[i];
	}
}
