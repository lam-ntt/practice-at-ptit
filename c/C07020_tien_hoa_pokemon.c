#include<stdio.h>

struct pokemon{
    char name[105];
    int num;
};
typedef struct pokemon pkm;

pkm p[70];

int main(){
    int n; scanf("%d", &n);
    int idx=0, sum=0, k, m;
    for(int i=0; i<n; i++){
        scanf("\n");
        gets(p[i].name);
        p[i].num=0;
        scanf("%d %d", &k, &m);

        while(m>=k){
            m=m-k+2;
            ++p[i].num;
        }
        sum+=p[i].num;
        if(p[i].num>p[idx].num) idx=i;
    }

    printf("%d\n%s", sum, p[idx].name);
    return 0;
}