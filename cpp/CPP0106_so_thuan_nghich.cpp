#include<iostream>
#include<math.h>
using namespace std;

int check(long long n){
    int arr[20], cnt=0;
    while(n>0){
        arr[cnt++]=n%10;
        n/=10;
    }

    for(int i=0; i<cnt/2; i++){
        if(arr[i]!=arr[cnt-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int test; cin>> test; 
    while(test--){
        long long n; cin>> n; 
        if(check(n)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}