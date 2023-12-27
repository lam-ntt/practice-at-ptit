#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
    int m, n, a, b; cin >> m >> n >> a >> b;
    int temp;
    if(m>n){
        temp=m; m=n; n=temp;
    }
    int cnt=0;
    for(int i=m; i<=n; i++){
        if(i%a==0||i%b==0){
            ++cnt;
        }
    }
    cout << cnt << "\n";
    }
    return 0;
}