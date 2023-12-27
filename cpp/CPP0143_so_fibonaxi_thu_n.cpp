#include<bits/stdc++.h>
using namespace std;

long long Fibonaxi(int n){
    if(n==1||n==2){
        return 1;
    }
    
    long long a=1, b=1;
    int cnt=2;
    while(cnt!=n){
        if(cnt%2==0){
            a=a+b;
        }else{
            b=b+a;
        }
        ++cnt;
    }

    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        cout << Fibonaxi(n) << "\n";
    }
    return 0;
}