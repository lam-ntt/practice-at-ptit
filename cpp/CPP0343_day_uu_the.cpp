#include<bits/stdc++.h>
using namespace std;

int check(string s[], int n){
	int cnt=0;
	for(int i=0; i<n; i++){
		if(s[i][s[i].size()-1]%2==0){
			++cnt;
		}else{
			--cnt;
		}
	}
	return (n%2==0&&cnt>0)||(n%2==1&&cnt<0);
}

int main(){
	int test; cin >> test; 
	while(test--){
		string s[205]; 
		int cnt=0;
		char k=' ';
		while(k!='\n'){
			cin >> s[cnt++];
			scanf("%c", &k);
		}
		
		if(check(s, cnt)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
