#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[205], cnt=0;
	string s; 
	while(cin >> s){
		if(s=="push") cin >> a[cnt++];
		else if(s=="show"){
			for(int i=0; i<cnt; i++){
				cout << a[i] << " ";
			}
			cout << "\n";
			if(cnt==0) cout << "empty\n";
		}else if(s=="pop") cnt--;
	}
	return 0;
}
