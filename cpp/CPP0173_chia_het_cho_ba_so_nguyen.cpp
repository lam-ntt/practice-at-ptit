#include<bits/stdc++.h>
using namespace std;

long long BCNN(long long a, long long b){
    long long a_copy=a;
    while(a%b!=0){
        a+=a_copy;
    }
    return a;
}

long long check(long long temp, long long n){
    long long min=pow(10, n-1), max=pow(10, n);
    long long d=(long long)(min/temp), e=(long long)(max/temp);
    for(long long i=d; i<=e; i++){
        if(i*temp>=min&&i*temp<max){
            return i;
        }
    }
    return -1;
}

int main(){
    int test; cin >> test;
    while(test--){
        long long a, b, c, n; cin >> a >> b >> c >> n;
        long long temp=BCNN(BCNN(a, b), c);

        if(check(temp, n)==-1){
            cout << "-1\n";
        }else{
            cout << check(temp, n)*temp << "\n";
        }
    }
    return 0;
}