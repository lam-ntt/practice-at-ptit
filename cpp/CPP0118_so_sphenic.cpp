#include<bits/stdc++.h>
using namespace std;

int check(int n){
    int cnt=0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            ++cnt; n/=i;
            if(n%i==0){
                return 0;
            }
        }
    }
    if(n>1){
        ++cnt;
    }
    if(cnt!=3){
        return 0;
    }
    return 1;
}

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        cout << check(n) << "\n";
    }
    return 0;
}