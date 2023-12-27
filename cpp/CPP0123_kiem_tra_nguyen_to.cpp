#include<iostream>
#include<math.h>
using namespace std;

int check(long n){
    if(n==0||n==1){
        return 0;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    long n; cin >> n;
    if(check(n)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}