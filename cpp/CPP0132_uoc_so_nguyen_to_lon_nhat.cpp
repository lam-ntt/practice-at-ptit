#include<bits/stdc++.h>
using namespace std;

int check(long long n){
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

long long maxPrime(long long n){
    long long e=sqrt(n);
    for(long long i=2; i<=e; i++){
        if(n%i==0&&check(n/i)){
            return n/i;
        }
    }
    for(long long i=e-1; i>1; i--){
        if(n%i==0&&check(i)){
            return i;
        }
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        long long n; cin >> n;
        if(check(n)){
            cout << n << "\n";
            continue;
        }
        cout << maxPrime(n) << "\n";
    }
    return 0;
}