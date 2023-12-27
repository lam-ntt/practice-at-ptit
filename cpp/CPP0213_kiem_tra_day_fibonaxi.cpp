#include<bits/stdc++.h>
using namespace std;

int check(int n){
    int a=0, b=1;
    while(1){
        if(n==a||n==b){
            return 1;
        }else if(n<a&&n<b){
            return 0;
        }
        a=a+b; b=b+a;
    }
}

int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int arr[1005];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(check(arr[i])){
                cout << arr[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}