#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string code, name, group, birth;
	float score;
};

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

void nhap(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		ds[i].code=init();
		cin.ignore();
		getline(cin, ds[i].name);
		cin >> ds[i].group >> ds[i].birth;
		chuanhoa(ds[i].birth);
		cin >> ds[i].score;
	}
}

void in(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cout << ds[i].code << " " << ds[i].name << " "
			 << ds[i].group << " " << ds[i].birth << " "
			 << fixed << setprecision(2)
			 << ds[i].score << "\n";
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
