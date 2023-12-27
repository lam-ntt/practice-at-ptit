#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
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
        unsigned long long int m=1;

        int temp;
        for(int i=2; i<=n; i++){
            if(isPrime(i)){
                temp=log(n)/log(i);
                m=m*pow(i, temp);
            }
        }
        cout << m << "\n";
    }
    return 0;
}