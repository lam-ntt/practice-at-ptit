#include<iostream>
using namespace std;

long long  check(int s){
    long long n=1;
    for(int i=1; i<=s; i++){
        n*=i;
    }
    return n;
}

int main(){
    int n; cin >> n;
    long long sum=0;
    for(int i=1; i<=n; i++){
        sum+=check(i);
    }
    cout << sum;
    return 0;
}