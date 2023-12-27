#include<iostream>
using namespace std;

int check(long long n){
    int i;
    while(n>9){
        i=n%10;
        n/=10;
        if(abs(i-n%10)!=1){
            return 0;
        }
    }
    return 1;
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