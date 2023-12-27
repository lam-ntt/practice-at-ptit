#include<bits/stdc++.h>
using namespace std;

int isPrime(long long n){
    long  long m=(long long)sqrt(n);
    for(int i=2; i<=m; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int test; cin >> test;
    while(test--){
        long long n; cin >> n;
        long long m=(long long)sqrt(n);
        int cnt=0;
        for(long long i=2; i<=m; i++){
            if(isPrime(i)){
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}