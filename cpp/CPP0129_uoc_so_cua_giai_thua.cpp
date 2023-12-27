#include<bits/stdc++.h>
using namespace std;

int main (){
    int test; cin >> test;
    while(test--){
        int n, p; cin >> n >> p;
        int m=(int)(log(n)/log(p));
        int cnt=0;
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(j%(int)pow(p, i)==0){
                    ++cnt;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}