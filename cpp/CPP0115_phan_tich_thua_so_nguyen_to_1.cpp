#include<iostream>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int cnt;
        for(int i=2; i<=n; i++){
            cnt=0;
            while(n%i==0){
                ++cnt;
                n/=i;
            }
            if(cnt!=0){
                cout << i << " " << cnt << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}