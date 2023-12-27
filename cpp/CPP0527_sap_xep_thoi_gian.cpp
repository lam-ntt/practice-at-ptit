#include<bits/stdc++.h>
using namespace std;

struct ThoiGian{
	int gio, phut, giay;
};

void nhap(ThoiGian &a){
	cin >> a.gio >> a.phut >> a.giay;
}

void in(ThoiGian a){
	cout << a.gio << " " << a.phut << " " << a.giay << "\n";
}

int cmp(ThoiGian a, ThoiGian b){
	if(a.gio!=b.gio){
		return a.gio<b.gio;
	}else{
		if(a.phut!=b.phut){
			return a.phut<b.phut;
		}else{
			return a.giay<b.giay;
		}
	}
}

int main(){
	int n; cin >> n;
	ThoiGian ds[5005];
	for(int i=0; i<n; i++){
		nhap(ds[i]);
	}
	sort(ds, ds+n, cmp);
	for(int i=0; i<n; i++){
		in(ds[i]);
	}
	return 0;
}
