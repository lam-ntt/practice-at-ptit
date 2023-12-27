#include<bits/stdc++.h>
using namespace std;

struct HangHoa{
	int code;
	string name, nhom;
	float mua, ban;
};

int cnt=1;
void nhap(HangHoa &a){
	a.code=cnt++;
	cin.ignore();
	getline(cin, a.name);
	getline(cin, a.nhom);
	cin >> a.mua >> a.ban;
}

void in(HangHoa a){
	cout << a.code << " " << a.name << " "
		 << a.nhom << " " << fixed << setprecision(2)
		 << a.ban-a.mua << "\n";
}

int cmp(HangHoa a, HangHoa b){
	return a.ban-a.mua>b.ban-b.mua;
}

int main(){
	int n; cin >> n;
	HangHoa ds[50];
	for(int i=0; i<n; i++){
		nhap(ds[i]);
	}
	sort(ds, ds+n, cmp);
	for(int i=0; i<n; i++){
		in(ds[i]);
	}
	return 0;
}
