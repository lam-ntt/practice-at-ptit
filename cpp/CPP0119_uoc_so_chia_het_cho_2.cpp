#include<bits/stdc++.h>
using namespace std;

int count(long long n){
    int cnt=1;
    long long s=sqrt(n);
    for(long long i=2; i<=s; i++){
        if(n%i==0){
            if(i%2==0){
                ++cnt;
            }
            if((n/i)%2==0){
                ++cnt;
            }
        }
    }

    if(s*s==n){
        --cnt;
    }
    return cnt;
}

int main(){
    int test; cin >> test;
    while(test--){
        long long n; cin >> n;
        if(n%2==1){
            cout << "0\n";
        }else{
            cout << count(n) << "\n";
        }
    }
    return 0;
}