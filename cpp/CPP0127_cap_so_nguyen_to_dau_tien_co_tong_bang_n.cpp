#include<bits/stdc++.h>
using namespace std;

int check(int n){
    if(n==0||n==1){
        return 0;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int cnt=0;
        for(int i=2; i<=n/2; i++){
            if(check(i)&&check(n-i)){
                ++cnt;
                cout << i << " " << n-i << "\n";
                break;
            }
        }
        if(cnt==0){
            cout << "-1\n";
        }
    }
    return 0;
}