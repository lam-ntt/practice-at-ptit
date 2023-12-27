#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        double a, b, c, d;
        cin >>a >> b>> c>> d;

        double lth=sqrt(pow(a-c, 2)+pow(b-d, 2));
        cout << std::setprecision(4)<< fixed<< lth << "\n";
    }
    return 0;
}