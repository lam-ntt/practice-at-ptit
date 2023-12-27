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

class SinhVien{
	private:
		string code, name, group, birth;
		float gpa;
	public:
		friend istream& operator >>(istream& in, SinhVien &a){
			a.code=init();
			in.ignore();
			getline(in, a.name);
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
		
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
