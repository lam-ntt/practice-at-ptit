#include<iostream>
using namespace std;

int check(long long n){
    int i=n%10;
    while(n>0){
        if(i!=0&&i!=6&&i!=8){
            return 0;
        }
        n/=10;
        i=n%10;
    }
    return 1;
}

int main(){
    int test; cin>> test;
    while(test--){
        long long n; cin>> n; 
        if(check(n)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}