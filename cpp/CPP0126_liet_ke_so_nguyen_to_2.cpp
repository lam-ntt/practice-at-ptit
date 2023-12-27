#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
    if(n==1||n==0){
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
    int test; cin >> test;
    while(test--){
        int a, b; cin >> a >> b;
        for(int i=a; i<=b; i++){
            if(check(i)){
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}