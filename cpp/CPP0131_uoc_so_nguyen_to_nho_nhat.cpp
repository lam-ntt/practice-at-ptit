#include<bits/stdc++.h>
using namespace std;

int prime(long n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int check(long n){
    if(n%2==0){
        return 2;
    }
    if(n==1){
        return 1;
    }
    if(prime(n)){
        return n;
    }
    for(int i=3; i<=sqrt(n); i++){
        if(n%i==0){
            return i;
        }
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        long n; cin >> n;
        for(long i=1; i<=n; i++){
            cout << check(i) << " ";
        }
        cout << "\n";
    }
    return 0;
}