#include<bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string name, birth;
	double diem1, diem2, diem3; 
};

void nhap(ThiSinh &a){
	getline(cin, a.name);
	cin >> a.birth >> a.diem1 >> a.diem2 >> a.diem3;
}

void in(ThiSinh a){
	cout << a.name << " " << a.birth << " "
		 << fixed << setprecision(1)
		 << a.diem1+a.diem2+a.diem3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
