 #include<iostream>
 using namespace std;

 int main(){
    int test; cin >> test;
    while(test--){
        char k; cin >> k;
        if(k<91)
            cout << static_cast<char>(k+32);
        else
            cout << static_cast<char>(k-32);
        cout << "\n";
    }
    return 0;
 }