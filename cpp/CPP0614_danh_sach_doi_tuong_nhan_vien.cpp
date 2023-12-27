#include<bits/stdc++.h>
using namespace std;

int cnt=1;
string init(){
	string tmp=to_string(cnt++);
	while(tmp.size()<5){
		tmp.insert(0, "0");
	}
	return tmp;
}

class NhanVien{
	private:
		string code, name, sex, birth, add, tax, date;
	public:
		friend istream& operator >>(istream& in, NhanVien &a){
			a.code=init();
			in.ignore();
			getline(in, a.name);
			in >> a.sex >> a.birth;
			in.ignore();
			getline(in, a.add);
			in >> a.tax >> a.date;
			return in;
		}
		
		friend ostream& operator <<(ostream& out, NhanVien a){
			out << a.code << " " << a.name << " " 
				<< a.sex << " " << a.birth << " " 
				<< a.add << " " << a.tax << " " 
				<< a.date << "\n";
				return out;
		}
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
