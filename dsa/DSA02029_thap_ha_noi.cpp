#include<bits/stdc++.h>
using namespace std;

int n;

void tryy(int n, char a, char b, char c){
	if(n==1){
		cout << a << " -> " << c << "\n";
	}else{
		tryy(n-1, a, c, b);
		tryy(1, a, b, c);
		tryy(n-1, b, a, c);
	}
}

int main(){
	cin >> n;
	tryy(n, 'A', 'B', 'C');
	return 0;
}
