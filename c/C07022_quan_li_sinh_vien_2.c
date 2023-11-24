#include<stdio.h>
#include<string.h>

struct Student{
    char name[105];
    float p1, p2, p3;
};
typedef struct Student student;

int n; student st[1005];

int main(){
    while(1){
        int t; scanf("%d", &t);
        if(t==1){
            int cnt; scanf("%d", &cnt);
            printf("%d\n", cnt);
            while(cnt--){
                scanf("\n");
                gets(st[n].name);
                scanf("%f %f %f", &st[n].p1, &st[n].p2, &st[n].p3);
                ++n;
            }
        }else if(t==2){
            int pos; scanf("%d", &pos);
            printf("%d\n", pos);
            scanf("\n");
            gets(st[pos-1].name);
            scanf("%f %f %f", &st[pos-1].p1, &st[pos-1].p2, &st[pos-1].p3);
        }else{
            for(int i=0; i<n; i++){
                if(st[i].p1<st[i].p2&&st[i].p2<st[i].p3){
                    printf("%d %s %0.1f %0.1f %0.1f\n", i+1, st[i].name, st[i].p1, st[i].p2, st[i].p3);
                }
            }
            break;
        }
    }
    return 0;
}