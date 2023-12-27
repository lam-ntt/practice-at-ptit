#include<bits/stdc++.h>
using namespace std;

void chuanhoa(string &s){
	vector<string> v;
	string tmp;
	stringstream ss (s);
	while(ss>>tmp){
		v.push_back(tmp);
	}
	s="";
	for(int i=0; i<2; i++){
		s.insert(i, v[i], 0, 1);
	}
	s.insert(0, "DC");
}

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
			for(int i=0; i<s.size(); i++){
				s[i]=toupper(s[i]);
			}
			cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
			chuanhoa(s);
			for(int i=0; i<n; i++){
				if(s=="DCCN"||s=="DCAT"){
					if(ds[i].code.find(s)!=string::npos&&ds[i].group[0]!='E'){
						cout << ds[i];
					}
				}else{
					if(ds[i].code.find(s)!=string::npos){
						cout << ds[i];
					}	
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
