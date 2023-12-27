#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        long b, p; cin >> b >> p;
        long cnt=0;
        for(long i=1; i<=p; i++){
            if((i*i)%p==1){
                ++cnt;
            }
        }

        long m=b/p; 
        if(m>0){
            cnt*=m;
        }else{
            cnt=0;
        }
        for(long i=m*p+1; i<=b; i++){
            if((i*i)%p==1){
                ++cnt;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}