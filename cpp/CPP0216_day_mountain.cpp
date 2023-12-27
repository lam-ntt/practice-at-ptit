#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int arr[10005];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int l, r; cin >> l >> r;
		string s; int j=0;
		for(int i=l; i<r; i++){
			if(arr[i+1]>arr[i]){
				s=s.insert(j++, "1");
			}else if(arr[i+1]<arr[i]){
				s=s.insert(j++, "0");
			}
		}
		
		if(s.find("1")>s.length()||s.find("0")>s.length()){
			cout << "Yes\n";
		}else if(s.find("01")>s.length()&&s.find("10")==s.rfind("10")){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
		
	}
	return 0;
}
