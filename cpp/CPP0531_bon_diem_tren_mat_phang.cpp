#include<bits/stdc++.h>
using namespace std;

struct Point{
	double x, y, z;
};

void nhap(Point &a){
	cin >> a.x >> a.y >> a.z;
}

Point phaptuyen(Point a, Point b, Point c){
	Point AB{a.x-b.x, a.y-b.y, a.z-b.z};
	Point AC{a.x-c.x, a.y-c.y, a.z-c.z};
	Point n;
	n.x=AB.y*AC.z-AB.z*AC.y;
	n.y=AB.z*AC.x-AB.x*AC.z;
	n.z=AB.x*AC.y-AB.y*AC.x;
	return n;
}

int check(Point a, Point b, Point c, Point d){
	Point n1= phaptuyen(a, b, c);
	Point n2= phaptuyen(a, b, d);
	
	if((n1.x==0&&n1.y==0&&n1.z==0)||(n2.x==0&&n2.y==0&&n2.z==0)){
		return 1;
	}
	
	if((n1.x==0&&n2.x!=0)||(n1.x!=0&&n2.x==0)){
		return 0;
	}
	if((n1.y==0&&n2.y!=0)||(n1.y!=0&&n2.y==0)){
		return 0;
	}
	if((n1.z==0&&n2.z!=0)||(n1.z!=0&&n2.z==0)){
		return 0;
	}
	
	double t[3];
	if(n1.x==0){
		t[0]=0;
	}else{
		t[0]=n1.x/n2.x;
	}
	if(n1.y==0){
		t[1]=0;
	}else{
		t[1]=n1.y/n2.y;
	}
	if(n1.z==0){
		t[2]=0;
	}else{
		t[2]=n1.z/n2.z;
	}
	
	set<double> s;
	for(auto i: t){
		if(i!=0){
			s.insert(i);
		}
	}
	if(s.size()==1){
		return 1;
	}
	return 0;
}

int main(){
	int test; cin >> test;
	while(test--){
		Point a, b, c, d;
		nhap(a); nhap(b); nhap(c); nhap(d);
		if(check(a, b, c, d)>0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
