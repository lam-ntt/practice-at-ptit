#include<bits/stdc++.h>
using namespace std;

int check(long n, int a){
    int i, cnt=0;
    long m=n;
    while(n>=10){
        i=n%10; n/=10;
        if(i>n%10){
            ++cnt;
        }else if(i<n%10){
            --cnt;
        }
    }
    if(abs(cnt)!=a-1){
        return 0;
    }

    for(int i=2; i<=sqrt(m); i++){      
        if(m%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        long min=pow(10, n-1);
        long max=pow(10, n);
        int cnt=0;
        for(long i=min; i<max; i++){
            if(check(i, n)){
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}