#include<bits/stdc++.h>
using namespace std;

class DoanhNghiep{
	private: 
		string code, name;
		int num;
	public:
		friend istream& operator >>(istream& in, DoanhNghiep &a){
			scanf("\n");
			getline(in, a.code);
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
		
		friend void lietke(DoanhNghiep ds[], int n, int l, int r){
			cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
			vector<DoanhNghiep> v;
			for(int i=0; i<n; i++){
				if(ds[i].num>=l&&ds[i].num<=r){
					v.push_back(ds[i]);
				}
			}
			sort(v.begin(), v.end());
			for(auto it: v){
				cout << it;
			}
		}
};

int main(){
	int n; cin >> n;
	DoanhNghiep ds[n];
	for(int i=0; i<n; i++){
		cin >> ds[i];
	}
	int q; cin >> q;
	while(q--){
		int l, r; cin >> l >> r;
		lietke(ds, n, l, r);
	}
	return 0;
}
