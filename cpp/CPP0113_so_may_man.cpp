#include<iostream>
using namespace std;

int main(){
    int test;  cin >> test;
    while(test--){
        long n; cin >> n;
        if(n%100==86){
            cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
    return 0;
}