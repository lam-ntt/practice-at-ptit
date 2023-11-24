#include<bits/stdc++.h>
using namespace std;

int n, k, a[25], A[25];

void readAndInit(){
	int mark[1005]={0}, tmp, cnt=1;
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		cin >> tmp;
		if(mark[tmp]==0){
			A[cnt++]=tmp;
			mark[tmp]=1;
		}
	}
	n=cnt-1;
	sort(A+1, A+n+1);
	
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

void print(){
	for(int i=1; i<=k; i++){
		cout << A[a[i]] << " ";
	}
	cout << "\n";
}

void gen(){
	while(1){
		print();
		int i=k;
		while(i>=1&&a[i]==n-k+i){
			--i;
		}
		if(i==0) return;
		else{
			++a[i];
			for(int j=i+1; j<=k; j++){
				a[j]=a[j-1]+1;
			}
		}
	}
}

int main(){
	readAndInit();
	gen();
	return 0;
}
