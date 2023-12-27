#include<bits/stdc++.h>
using namespace std;

int isPrime(long long n){
    if(n<2){
        return 0;
    }
    for(long long i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int isPerfectSquare(long long n){
    long long i=sqrt(n);
    if(i*i==n){
        return 1;
    }
    return 0;
}

int main(){
    int test; cin >> test;
    while(test--){
        long long a, b; cin >> a >> b;
        long long temp;
        if(a>b){
            temp=a; a=b; b=temp;
        }
        long long m=sqrt(a), n=sqrt(b);
        if(isPerfectSquare(a)==0){
            ++m;
        }
        int cnt=0;
        for(long long i=m; i<=n; i++){
            if(isPrime(i)){
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}