#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int a, m; cin >> a >> m;
        int cnt=0;
        for(int i=0; i<m; i++){
            if((a*i)%m==1){
                cout << i << "\n";
                ++cnt;
                break;
            }
        }
        if(cnt==0){
            cout << "-1\n";
        }
    }
    return 0;
}