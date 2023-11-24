#include<bits/stdc++.h>
#define N 10000
using namespace std;

int nt[N]={0}, mark[N]={0};

int checkPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void init(){
	for(int i=2; i<N; i++) nt[i]=1;
	for(int i=2; i<=sqrt(N); i++){
		if(checkPrime(i)){
			for(int j=2*i; j<N; j+=i) nt[j]=0;
		}
	}
}

int main(){
	init();
	int test; cin >> test;
	while(test--){
		int s, t; cin >> s >> t;
		for(int i=0; i<10000; i++) mark[i]=0;
		
		int cnt=0;
		queue<int> q;
		q.push(s);
		q.push(-1);
		mark[s]=1;
		
		while(1){
			if(q.front()==t){
				cout << cnt << "\n";
				break;
			}else if(q.front()==-1){
				++cnt;
				q.push(-1);
			}else{
				for(int i=0; i<4; i++){
					string s=to_string(q.front());
					for(char j='0'; j<='9'; j++){
						if(i==0&&j=='0') continue;
						s[i]=j; 
						int tmp=stoi(s);
						if(nt[tmp]&&mark[tmp]==0){
							q.push(tmp);
							mark[tmp]=1;
						} 
					}
				}
			}
			q.pop();
		}
	}
	return 0;
}

