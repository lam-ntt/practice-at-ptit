#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string tmp, begin, end;
		for(int i=0; i<6; i++){
			cin >> tmp;
			begin+=tmp;
		}
		for(int i=0; i<6; i++){
			cin >> tmp;
			end+=tmp;
		}
		
		int cnt=0;
		queue<string> q;
		q.push(begin);
		q.push("-1");
		while(1){
			if(q.front()=="-1"){
				++cnt;
				q.push("-1");
			}else if(q.front()==end){
				cout << cnt << "\n";
				break;
			}else{
				string s=q.front();
				tmp=s;
				tmp[0]=s[3]; tmp[1]=s[0]; tmp[3]=s[4]; tmp[4]=s[1];
				q.push(tmp);
				tmp=s;
				tmp[1]=s[4]; tmp[2]=s[1]; tmp[4]=s[5]; tmp[5]=s[2];
				q.push(tmp);
			}
			q.pop();
		}
	}
	return 0;
}
