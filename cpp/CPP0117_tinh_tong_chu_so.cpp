#include<iostream>
using namespace std;

long minimize(long n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int test; cin >> test;
    while(test--){
        long n; cin >> n;
        while(n>9){
            n=minimize(n);
        }
        cout << n << "\n";
    }
    return 0;
}