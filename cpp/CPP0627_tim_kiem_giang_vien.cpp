#include<bits/stdc++.h>
using namespace std;

int cnt=1;

string init(){
	string tmp=to_string(cnt++);
	while(tmp.size()<2){
		tmp.insert(0, "0");
	}
	tmp.insert(0, "GV");
	return tmp;
}

void chuanhoa(string &s){
	string s1="";
	string tmp;
	stringstream ss(s);
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		s1+=tmp[0];
	}
	s=s1;
}

class GiangVien{
	private:
		string code, name, faculty;
	public:
		friend istream& operator >>(istream& in, GiangVien &a){
			a.code=init();
			getline(in, a.name);
			getline(in, a.faculty);
			chuanhoa(a.faculty);
			return in;
		}
		
		friend ostream& operator <<(ostream& out, GiangVien a){
			out << a.code << " " << a.name << " " << a.faculty << "\n";
			return out;
		}
		
		friend void lietke(GiangVien ds[], int n, string s){
			cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
			for(int i=0; i<s.size(); i++){
				s[i]=tolower(s[i]);
			}
			for(int i=0; i<n; i++){
				string tmp=ds[i].name;
				for(int i=0; i<tmp.size(); i++){
					tmp[i]=tolower(tmp[i]);
				}
				if(tmp.find(s)!=string::npos){
					cout << ds[i];
				}
			}
		}
};

int main(){
	int n; cin >> n; cin.ignore();
	GiangVien ds[1005];
	for(int i=0; i<n; i++){
		cin >> ds[i];
	}
	int q; cin >> q; cin.ignore();
	while(q--){
		string s; getline(cin, s);
		lietke(ds, n, s);
	}
	return 0;
}
