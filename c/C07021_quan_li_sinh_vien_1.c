#include<stdio.h>
#include<string.h>

struct Student{
    int code;
    char name[105];
    float p1, p2, p3;
};
typedef struct Student student;

int n; student st[1005];

int sum(student n){
    return n.p1+n.p2+n.p3;
}

void sort(){
    student tmp;
    int idx;
    for(int i=0; i<n-1; i++){
        idx=i;
        for(int j=i+1; j<n; j++){
            if(sum(st[j])<sum(st[idx])) idx=j;
        }
        if(sum(st[i])>sum(st[idx])){
            tmp=st[i]; st[i]=st[idx]; st[idx]=tmp;
        }
    }
}

int main(){
    while(1){
        int t; scanf("%d", &t);
        if(t==1){
            int cnt; scanf("%d", &cnt);
            printf("%d\n", cnt);
            while(cnt--){
                scanf("\n");
                st[n].code=n+1;
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
            sort();
            for(int i=0; i<n; i++){
                printf("%d %s %0.1f %0.1f %0.1f\n", st[i].code, st[i].name, st[i].p1, st[i].p2, st[i].p3);
            }
            break;
        }
    }
    return 0;
}