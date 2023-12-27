#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
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

int sumDigit(int n){
    int i=0; 
    while(n>0){
        i+=n%10;
        n/=10;
    }
    return i;
}

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int m=n;
        
        int sum=0;
        for(int i=2; i<=n; i++){
            while(n%i==0){
                sum+=sumDigit(i);
                n/=i;
            }
        }
        if(sum==sumDigit(m)&&isPrime(m)==0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}