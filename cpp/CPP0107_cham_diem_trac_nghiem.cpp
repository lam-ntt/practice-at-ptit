#include<iostream>
#include<iomanip>
using namespace std;

char ans1[15]={'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char ans2[15]={'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

int main(){
    int test; cin >> test;
    while(test--){
        int k; cin >> k;
        char arr[20];
        for(int i=0; i<15; i++){
            cin >> arr[i];
        }

        double cnt=0;
        if(k==101){
            for(int i=0; i<15; i++){
            if(arr[i]==ans1[i])
                cnt+=(double)10/15;;
            }
        }else{
            for(int i=0; i<15; i++){
            if(arr[i]==ans2[i])
                cnt+=(double)10/15;  
            }
        }

        cout << std::setprecision(2) << fixed << cnt <<"\n";
    }
    return 0;
}