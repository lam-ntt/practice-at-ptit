#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
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
    int a, b; cin >> a >> b;
    int n; 
    if(a>b){
        n=a; a=b; b=n;
    }
    for(int i=a; i<=b; i++){
        if(check(i)){
            cout << i << " ";
        }
    }
    return 0;
}