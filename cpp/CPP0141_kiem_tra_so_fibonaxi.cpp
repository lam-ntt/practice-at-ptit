#include<bits/stdc++.h>
using namespace std;

int check(long long n){
    long long a=0, b=1;
    while(1){
        if(n==a||n==b){
            return 1;
        }else if(n<a&&n<b){
            return 0;
        }
        a=a+b; b=b+a; 
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        long long n; cin >> n;
        if(check(n)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}