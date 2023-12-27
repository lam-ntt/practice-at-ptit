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

string trichxuat(string s){
	vector<string> v;
	string tmp;
	stringstream ss(s);
	while(ss>>tmp){
		v.push_back(tmp);
	}
	return v[v.size()-1];
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
		
		friend int operator <(GiangVien a, GiangVien b){
			if(trichxuat(a.name)!=trichxuat(b.name)){
				return trichxuat(a.name)<trichxuat(b.name);
			}else{
				return a.code<b.code;
			}
		}
};

int main(){
	int n; cin >> n; cin.ignore();
	GiangVien ds[1005];
	for(int i=0; i<n; i++){
		cin >> ds[i];
	}
	sort(ds, ds+n);
	for(int i=0; i<n; i++){
		cout << ds[i];
	}
	return 0;
}
