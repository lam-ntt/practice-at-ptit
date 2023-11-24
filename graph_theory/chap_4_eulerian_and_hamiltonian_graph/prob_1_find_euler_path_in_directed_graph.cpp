#include<bits/stdc++.h>
using namespace std;

int n, a[105][105];

int checkFirst(){
	int deg[n+1]={0};
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			deg[i]-=a[i][j];
			deg[j]+=a[i][j];
		}
	}
	
	int cnt=0, fi=-1;
	for(int i=1; i<=n; i++){
		if(deg[i]<0){
			++cnt;
			if(fi==-1) fi=i;
		}
	}
	if(cnt==0) return 1;
	else if(cnt==1) return fi;
	else return -1;
}

void findEulerPath(int u){
	if(u==-1) return;
	stack<int> s, ce;
	s.push(u);
	while(!s.empty()){
		u=s.top();
		int ok=0;
		for(int v=1; v<=n; v++){
			if(a[u][v]){
				s.push(v);
				a[u][v]=0;
				ok=1; break;
			}
		}
		if(!ok){
			ce.push(s.top());
			s.pop();
		}
	}
	
	while(!ce.empty()){
		cout << ce.top() << " ";
		ce.pop();
	}
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	
	findEulerPath(checkFirst());
	return 0;
}
