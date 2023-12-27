#include<bits/stdc++.h>
using namespace std;

int check(int n){
    if(n<2){
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
        for(int i=2; i<=n; i++){
            if(check(i)&&check(n-i)){
                cout << i << " " << n-i << "\n";
                break;
            }
        }
    }
    return 0;
}