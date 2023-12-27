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
		float gpa;
	public:
		void nhap(){
			code="B20DCCN001";
			getline(cin, name);
			cin >> group >> birth;
			chuanhoa(birth);
			cin >> gpa;
		}
		
		void xuat(){
			cout << code << " " << name << " "
				 << group << " " << birth << " "
				 << fixed << setprecision(2) << gpa;
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
