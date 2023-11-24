#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int s, t; cin >> s >> t;
		if(s>=t) cout << s-t << "\n";
		else{
			int mark[30005]={0}, cnt=0;
			queue<int> q;
			q.push(s); 
			q.push(1e7);
			mark[s]=1;
			
			while(1){
				if(q.front()==1e7){
					++cnt;
					q.push(1e7);
				}
				else if(q.front()==t){
					cout << cnt << "\n";
					break;
				}
				else{
					if(q.front()>0&&mark[q.front()-1]==0){
						q.push(q.front()-1);
						mark[q.front()-1]=1;
					}
					if(q.front()<t&&mark[q.front()*2]==0){
						q.push(q.front()*2);
						mark[q.front()*2]=1;
					}
				}
				q.pop();
			}
		}
	}
	return 0;
}
