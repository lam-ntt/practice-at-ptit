#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        long long n, k; cin >> n >> k;
        long long s=0;
        for(int i=1; i<=n; i++){
            s+=i%k;
        }
        cout << s << "\n";
    }
    return 0;
}