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

bool cmp(NhanVien a, NhanVien b){
	string s1=a.birth.insert(0, a.birth, 6, 4);
	string s2=b.birth.insert(0, b.birth, 6, 4);
	if(s1!=s2){
		return s1<s2;
	}else{
		s1=a.birth.insert(0, a.birth, 0, 2);
		s2=b.birth.insert(0, b.birth, 0, 2);
		if(s1!=s2){
			return s1<s2;
		}else{
			s1=a.birth.insert(0, a.birth, 3, 2);
			s2=b.birth.insert(0, b.birth, 3, 2);
			return s1<s2;
		}
	}
}

void sapxep(NhanVien ds[], int n){
	sort(ds, ds+n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
