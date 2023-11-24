#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll x, y; 
    while(scanf("%lld %lld", &x, &y)!=-1){
        ll n=abs(x-y);
        if(n==1){
            printf("1\n");
            continue;
        }else{
            int cnt=0, m=1;
            while(n>=2*m){
                cnt+=2;
                n-=2*m;
                ++m;
            }
            if(n>m) cnt+=2;
            else if (m>=n&&n>0) cnt+=1;
            printf("%d\n", cnt);
        }
    }
    return 0;
}