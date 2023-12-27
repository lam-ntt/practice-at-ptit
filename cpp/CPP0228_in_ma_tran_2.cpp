#include<bits/stdc++.h>
using namespace std;

int a[50][50];

int e=0;
int buff(){
	return ++e;
}

int main(){
	int t; cin >> t;
	while(t--){
		e=0;
		int n; cin >> n; n*=4;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				a[i][j]=buff();
			}
		}
		
		int num[n*n/2], cnt=0;
		int l=1, r=n-1, t=0, b=n-2;
		while(1){
			if(b>=t){
				num[cnt++]=a[b+1][r];
				for(int i=b; i>=t; i--){
					num[cnt++]=a[i][r];
				}
				r-=2;
			}else{
				break;
			}
			
			if(r>=l){
				num[cnt++]=a[t][r+1];
				for(int i=r; i>=l; i--){
					num[cnt++]=a[t][i];
				}
				t+=2;
			}else{
				break;
			}
			
			if(t<=b){
				num[cnt++]=a[t-1][l];
				for(int i=t; i<=b; i++){
					num[cnt++]=a[i][l];
				}
				l+=2;
			}else{
				break;
			}
			
			if(l<=r){
				num[cnt++]=a[b][l-1];
				for(int i=l; i<=r; i++){
					num[cnt++]=a[b][i];
				}
				b-=2;
			}else{
				break;
			}
		}
		
		for(int i=cnt-1; i>=0; i--){
			cout << num[i] << " ";
		}
		cout << "\n";
		
		cnt=0; l=0, r=n-2, t=1, b=n-1;
		while(1){
			if(t<=b){
				num[cnt++]=a[t-1][l];
				for(int i=t; i<=b; i++){
					num[cnt++]=a[i][l];
				}
				l+=2;
			}else{
				break;
			}
			
			if(l<=r){
				num[cnt++]=a[b][l-1];
				for(int i=l; i<=r; i++){
					num[cnt++]=a[b][i];
				}
				b-=2;
			}else{
				break;
			}
			
			if(b>=t){
				num[cnt++]=a[b+1][r];
				for(int i=b; i>=t; i--){
					num[cnt++]=a[i][r];
				}
				r-=2;
			}else{
				break;
			}
			
			if(r>=l){
				num[cnt++]=a[t][r+1];
				for(int i=r; i>=l; i--){
					num[cnt++]=a[t][i];
				}
				t+=2;
			}else{
				break;
			}
		}
		
		for(int i=cnt-1; i>=0; i--){
			cout << num[i] << " ";
		}
		cout << "\n";		
	}
	return 0;
}
