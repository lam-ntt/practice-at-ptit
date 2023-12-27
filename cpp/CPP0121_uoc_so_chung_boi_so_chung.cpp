#include<iostream>
using namespace std;

long USCNN(long a, long b){
    long temp=100; 
    while(temp!=0){
    temp=b%a; b=a; a=temp;
    }
    return b;
}

int main(){
    int test; cin >> test;
    while(test--){
        long a, b; cin >> a >> b;
        long n;
        if(a>b){
            n=a; a=b; b=n;
        }
        cout << a*b/USCNN(a, b) << " " << USCNN(a, b) << "\n";
    }
    return 0;
}