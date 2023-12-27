#include<iostream>
#include<math.h>
using namespace std;

int check(long n){
    int cnt=0;
    while(n>0){
        if((n%10)%2==0){
            ++cnt;
        }else{
            --cnt;
        }
        n/=10;
    }
    if(cnt==0){
        return 1;
    }return 0;
}

int main(){
    int n; cin >> n;
    if(n%2==1){
        return 0;
    }

    int cnt=0;
    long min= pow(10, n-1), max=pow(10, n);
    for(long i=min; i<max; i++){
        if(check(i)){
            ++cnt; 
            cout << i << " ";
            if(cnt%10==0){
                cout << "\n";
                cnt=0;
            }
        }
    }
}