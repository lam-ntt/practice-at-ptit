#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        long n; cin >> n;
        for(int i=2; i<=sqrt(n); i++){
            while(n%i==0){
                cout << i << " ";
                n/=i;
            }
        }
        if(n>1){
            cout << n;
        }
        cout << "\n";
    }
    return 0;
}