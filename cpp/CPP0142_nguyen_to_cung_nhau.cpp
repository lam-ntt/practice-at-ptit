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

int UCLN(int a, int b){
    int temp;
    while(a!=0){
        temp=a; a=b%a; b=temp;
    }
    return b;
}

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int cnt=0;
        for(int i=1; i<n; i++){
            if(UCLN(i, n)==1){
                ++cnt;
            }
        }
        if(isPrime(cnt)){
            cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
    return 0;
}