#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        long n, k; cin >> n >> k;
        long arr[1000], cnt=0;

        for(long i=2; i<=n; i++){
            while(n%i==0){
                arr[cnt++]=i;
                n/=i;
            }
        }
        if(k>cnt){
            cout << "-1\n";
        }else{
            cout << arr[k-1] << "\n";
        }
    }
    return 0;
}