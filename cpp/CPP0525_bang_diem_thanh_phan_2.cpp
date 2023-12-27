#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string code, name, group;
	float diem1, diem2, diem3;
};

void nhap(SinhVien &a){
	cin.ignore();
	getline(cin, a.code);
	getline(cin, a.name);
	cin >> a.group >> a.diem1 >> a.diem2 >> a.diem3;
}

void in_ds(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cout << i+1 << " " << ds[i].code << " "
			 << ds[i].name << " " << ds[i].group << " "
			 << fixed << setprecision(1) 
			 << ds[i].diem1 << " "<< ds[i].diem2 << " " 
			 << ds[i].diem3 << "\n";
	}
}

int cmp(SinhVien a, SinhVien b){
	return a.name<b.name;
}

void sap_xep(SinhVien ds[], int n){
	sort(ds, ds+n, cmp);
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
