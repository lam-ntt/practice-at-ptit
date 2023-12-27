#include<bits/stdc++.h>
using namespace std;

long long UCLN(long long a, long long b){
    long long temp;
    if(a<b){
        temp=a; a=b; b=temp;
    }
    while(a!=0){
        temp=a; a=b%a; b=temp;
    }
    return b;
}

int main(){
    int test; cin >> test;
    while(test--){
        long long a, x, y; cin >> a >> x >> y;
        long long cnt=UCLN(x, y);
        for(long long i=1; i<=cnt; i++){
            cout << a;
        }
        cout << "\n";
    }
    return 0;
}