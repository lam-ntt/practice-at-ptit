#include<bits/stdc++.h>
using namespace std;

int check(int n){
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
        for(int i=2;  i<=sqrt(n); i++){
            if(i*i<=n&&check(i)){
                cout << i*i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}