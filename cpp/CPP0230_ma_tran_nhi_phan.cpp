#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int arr[4];
	
	int cnt=0, count=0;
	while(n--){
		for(int i=0; i<3; i++){
			cin >> arr[i];
			if(arr[i]==1){
				++cnt;
			}
		}
		if(cnt>=2){
			++count;
		}
		cnt=0;
	}
	cout << count << "\n";
	return 0;
}
