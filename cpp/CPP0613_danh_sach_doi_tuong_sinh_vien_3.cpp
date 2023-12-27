#include<bits/stdc++.h>
using namespace std;

int cnt=1;
string init(){
	string tmp=to_string(cnt++);
	while(tmp.size()<3){
		tmp.insert(0, "0");
	}
	tmp.insert(0, "B20DCCN");
	return tmp;
}

void chuanhoa(string &s){
	if(s[1]=='/'){
		s.insert(0, "0");
	}
	if(s[4]=='/'){
		s.insert(3, "0");
	}
}

void chuanhoa2(string &s){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
	
	vector<string> v;
	string tmp;
	stringstream ss(s);
	while(ss>>tmp){
		tmp[0]-=32;
		v.push_back(tmp);
	}
	
	s="";
	for(int i=0; i<v.size()-1; i++){
		s+=v[i]; s+=" ";
	}
	s+=v[v.size()-1];
}

class SinhVien{
	private:
		string code, name, group, birth;
		float gpa;
	public:
		friend istream& operator >>(istream& in, SinhVien &a){
			a.code=init();
			scanf("\n");
			getline(in, a.name);
			chuanhoa2(a.name);
			in >> a.group >> a.birth;
			chuanhoa(a.birth);
			in >> a.gpa;
			return in;
		}
		
		friend ostream& operator <<(ostream& out, SinhVien a){
			out << a.code << " " << a.name << " "
				<< a.group << " " << a.birth << " "
				<< fixed << setprecision(2) << a.gpa << "\n";
			return out;
		}
		
		friend int operator <(SinhVien a, SinhVien b){
			return a.gpa>b.gpa;
		}
		
		friend void sapxep(SinhVien ds[], int n){
			sort(ds, ds+n);
		}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
