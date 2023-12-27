#include<bits/stdc++.h>
using namespace std;

class DoanhNghiep{
	private: 
		string code, name;
		int num;
	public:
		friend istream& operator >>(istream& in, DoanhNghiep &a){
			in.ignore();
			in >> a.code;
			in.ignore();
			getline(in, a.name);
			in >> a.num;
			return in;
		}
		
		friend ostream& operator <<(ostream& out, DoanhNghiep a){
			out << a.code << " " << a.name << " " 
				<< a.num << "\n";
			return  out;
		}
		
		friend int operator <(DoanhNghiep a, DoanhNghiep b){
			if(a.num!=b.num){
				return a.num>b.num;
			}else{
				return a.code<b.code;
			}
		}
};

int main(){
	int n; cin >> n;
	DoanhNghiep ds[n];
	for(int i=0; i<n; i++){
		cin >> ds[i];
	}
	sort(ds, ds+n);
	for(int i=0; i<n; i++){
		cout << ds[i];
	}
	return 0;
}
