#include<bits/stdc++.h>
using namespace std;

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
		float score;
	public:
		friend istream& operator >>(istream& in, SinhVien &a){
			a.code="B20DCCN001";
			getline(in, a.name);
			in >> a.group >> a.birth;
			chuanhoa(a.birth);
			in >> a.score;
			return in;
		}
		
		friend ostream& operator <<(ostream& out, SinhVien a){
			out << a.code << " " << a.name << " "
				<< a.group << " " << a.birth << " "
				<< fixed << setprecision(2) << a.score;
				return out;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
