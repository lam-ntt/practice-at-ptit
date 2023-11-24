#include<bits/stdc++.h>
using namespace std;

int main(){
	string begin="1238004765";
	vector<string> v;
	set<string> st;
	
	queue<string> q;
	q.push(begin);
	q.push("-1");	
	string s, tmp;
	while(1){
		if(q.front()=="-1") q.push("-1");
		else{
			s=q.front();
			tmp=s;
			tmp[3]=s[0]; tmp[0]=s[1]; tmp[1]=s[5];
			tmp[5]=s[8]; tmp[8]=s[7]; tmp[7]=s[3];
			q.push(tmp); st.insert(tmp);
			tmp=s;
			tmp[4]=s[1]; tmp[1]=s[2]; tmp[2]=s[6];
			tmp[6]=s[9]; tmp[9]=s[8]; tmp[8]=s[4];
			q.push(tmp); st.insert(tmp);
		}	
		if(v.size()==32000) break;
		v.push_back(q.front());
		q.pop();
	}
	
	int t; cin >> t;
	while(t--){
		string en, end;
		for(int i=0; i<10; i++){
			cin >> en; 
			end+=en;
		}
		
		queue<string> q2;
		q2.push(end);
		q2.push("-1");
		int cnt=0;
		while(1){
			if(q2.front()=="-1"){
				++cnt;
				q2.push("-1");
			}else{
				if(st.count(q2.front())!=0) break;
				s=q2.front(); tmp=s;
				tmp[0]=s[3]; tmp[1]=s[0]; tmp[5]=s[1];
				tmp[8]=s[5]; tmp[7]=s[8]; tmp[3]=s[7];
				q2.push(tmp); 
				tmp=s;
				tmp[1]=s[4]; tmp[2]=s[1]; tmp[6]=s[2];
				tmp[9]=s[6]; tmp[8]=s[9]; tmp[4]=s[8];
				q2.push(tmp); 
			}
			q2.pop();
		}
		
		tmp=q2.front();
		for(auto it: v){
			if(it=="-1") ++cnt;
			else if(it==tmp) break;
		}
		cout << cnt << "\n";
	}
	return 0;
}
