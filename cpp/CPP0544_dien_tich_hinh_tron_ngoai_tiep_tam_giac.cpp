#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

struct Point{
	double x, y;
};

void nhap(Point &a){
	cin >> a.x >> a.y;
}

double dis(Point a, Point b){
	return sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y, 2));
}

double ab, bc, ca;

void find(Point a, Point b, Point c){
	ab=dis(a, b);
	bc=dis(b, c);
	ca=dis(c, a);
	
	if(ab<=0||bc<=0||ca<=0||ab+bc<=ca||bc+ca<=ab||ca+ab<=bc){
		cout << "INVALID\n";
		return;
	}
	
	double s=sqrt((ab+bc+ca)*(-ab+bc+ca)*(ab-bc+ca)*(ab+bc-ca))/4;
	double r=ab*bc*ca/(4*s);
	double S=r*r*PI;
	cout << fixed << setprecision(3) << S << "\n";
}	

int main(){
	int test; cin >> test;
	while(test--){
		Point a, b, c;
		nhap(a); nhap(b); nhap(c);
		find(a, b, c);
	}
	return 0;
}
