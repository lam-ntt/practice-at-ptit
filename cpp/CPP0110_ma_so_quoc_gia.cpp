#include<iostream>
using namespace std;

int check(int a, int b, int c){
    if(a==0&&b==8&&c==4){
        return 1;
    }
    return 0;
}

int main(){
    int test; cin >> test;
    while(test--){
        long long n; cin >> n;
        int arr[20], cnt=20;
        while(n>0){
            arr[cnt--]=n%10;
            n/=10;
        }

        for(int i=cnt+1; i<=20; i++){
            if(check(arr[i], arr[i+1], arr[i+2])){
                i+=2;
            }else{
                cout << arr[i];
            }
        }
        cout << "\n";
    }
    return 0;
}