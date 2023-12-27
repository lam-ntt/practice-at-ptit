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
		
		friend void lietke(SinhVien ds[], int n, string s){
			cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
			string s1;
			s1.insert(0, s, 2, 2);
			for(int i=0; i<n; i++){
				string s2;
				s2.insert(0, ds[i].group, 1, 2);
				if(s2==s1){
					cout << ds[i];
				}
			}
		}
};

int main(){
	int n; cin >> n;
	SinhVien ds[1005];
	for(int i=0; i<n; i++){
		cin >> ds[i];
	}
	int q; cin >> q; cin.ignore();
	while(q--){
		string s; getline(cin, s);
		lietke(ds, n, s);
	}
}
