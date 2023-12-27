#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double n; cin >> n;
    double sum=0;
    for(int i=1; i<=n; i++){
        sum+=(double)1/i;
    }
    cout << std::setprecision(4) << fixed << sum;
    return 0;
}