#include<iostream>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long long n; cin >> n;
        cout << (1+n)*n/2 << "\n";
    }
    return 0;
}