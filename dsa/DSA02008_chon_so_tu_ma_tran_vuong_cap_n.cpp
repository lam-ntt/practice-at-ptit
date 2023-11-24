#include<bits/stdc++.h>
using namespace std;

int n, k, c[15][15];
int a[15], mark[15], cnt; 
vector<int> v;

void readAndInit(){
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> c[i][j];
		}
	}

	for(int i=1; i<=n; i++){
		mark[i]=0;
	}
	cnt=0;
}

void update(){
	++cnt;
	for(int i=1; i<=n; i++){
		v.push_back(a[i]);
	}
}

void tryy(int i){
	for(int j=1; j<=n; j++){
		if(mark[j]==0){
			a[i]=j;
			mark[j]=1;
			k-=c[i][j];
			if(i==n&&k==0) update();
			else if(k>0) tryy(i+1);
			mark[j]=0;
			k+=c[i][j];
		}
	}
}

void print(){
	cout << cnt << "\n";
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
		if((i+1)%n==0) cout << "\n";
	}
}

int main(){
	readAndInit();
	tryy(1);
	print();
}
