#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string code, name, sex, birth, add, tax, date;
};

int cnt=1;
string init(){
	string tmp=to_string(cnt++);
	while(tmp.size()<5){
		tmp.insert(0, "0");
	}
	return tmp;
}

void nhap(NhanVien &a){
	a.code=init();
	cin.ignore();
	getline(cin, a.name);
	cin >> a.sex >> a.birth;
	cin.ignore();
	getline(cin, a.add);
	cin >> a.tax >> a.date;
}

void inds(NhanVien ds[], int n){
	for(int i=0; i<n; i++){
		cout << ds[i].code << " " << ds[i].name << " "
			 << ds[i].sex << " " << ds[i].birth << " "
			 << ds[i].add << " " << ds[i].tax << " "
			 << ds[i].date << "\n";
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
