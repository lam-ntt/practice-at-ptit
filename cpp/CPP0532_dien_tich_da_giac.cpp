#include<bits/stdc++.h>
using namespace std;

struct Point{
	float x, y;
};

void nhap(Point &a){
	cin >> a.x >> a.y;
}

float dientich(Point a, Point b, Point c){
	return abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y))/2;
}

void tinh(Point ds[], int n){
	float sum=0;
	for(int i=1; i<n-1; i++){
		sum+=dientich(ds[0], ds[i], ds[i+1]);
	}
	cout << fixed << setprecision(3) << sum << "\n";
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		Point ds[1005];
		for(int i=0; i<n; i++){
			nhap(ds[i]);
		}
		tinh(ds, n);
	}
	return 0;
}
