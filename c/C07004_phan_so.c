#include<stdio.h>
#define ll long long

struct PS{
    ll x, y;
};
typedef struct PS ps;

ll ucln(int a, int b){
    ll uc;
    if(a<b){
        uc=a; a=b; b=uc;
    }
    while(b!=0){
        uc=a; a=b; b=uc%b;
    }
    uc=a;
    return uc;
}

void rutgon(ps *a){
    ll uc=ucln(a->x, a->y);
    a->x/=uc;
    a->y/=uc;
}

void quydong(ps a, ps b){
    rutgon(&a);
    rutgon(&b);
    ll bc=a.y*b.y/ucln(a.y, b.y);
    a.x=a.x*bc/a.y;
    b.x=b.x*bc/b.y;
    a.y=bc;
    b.y=bc;
    printf("%lld/%lld %lld/%lld\n", a.x, a.y, b.x, b.y);
}

void tong(ps a, ps b){
    ll bc=a.y*b.y/ucln(a.y, b.y);
    a.x=a.x*bc/a.y;
    b.x=b.x*bc/b.y;
    ps res;
    res.y=bc;
    res.x=a.x+b.x;
    rutgon(&res);
    printf("%lld/%lld\n", res.x, res.y);
}

void thuong(ps a, ps b){
    ps res;
    res.x=a.x*b.y;
    res.y=a.y*b.x;
    rutgon(&res);
    printf("%lld/%lld\n", res.x, res.y);
}

int main(){
    int t; scanf("%d", &t);
    int cnt=1;
    while(t--){
        ps a, b;
        scanf("%lld %lld %lld %lld", &a.x, &a.y, &b.x, &b.y);
        printf("Case #%d:\n", cnt++);
        quydong(a, b);
        tong(a, b);
        thuong(a, b);
    }
    return 0;
}