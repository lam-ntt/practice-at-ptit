#include<bits/stdc++.h>
using namespace std;

int n, min_value, A[20][20];
int f, f_min, a[20], mark[20];

void readAndInit(){
	cin >> n; min_value=1e9;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> A[i][j];
			if(i!=j) min_value=min(min_value, A[i][j]);
		}
	}

	for(int i=1; i<=n; i++){
		mark[i]=0;
	}
	a[1]=1; mark[1]=1;
	f=0; f_min=1e9;
}

void tryy(int i){
	for(int j=2; j<=n; j++){
		if(mark[j]==0){
			a[i]=j;
			mark[j]=1;
			f+=A[a[i-1]][a[i]];
			if(i==n) f_min=min(f_min, f+A[a[n]][a[1]]);
			else if(f+(n-i+1)*min_value<f_min&&i<n) tryy(i+1);
			f-=A[a[i-1]][a[i]];
			mark[j]=0;
		}
	}
}

int main(){
	readAndInit();
	tryy(2);
	cout << f_min;
	return 0;
}
