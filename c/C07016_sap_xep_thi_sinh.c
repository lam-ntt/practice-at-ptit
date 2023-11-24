#include<stdio.h>
#include<string.h>

struct Student{
    int code;
    char name[55];
    char birth[55];
    float p1, p2, p3;
};

typedef struct Student student;

int n=0; student st[1005];

float sum(student s){
    return s.p1+s.p2+s.p3;
}

void sort(){
    student tmp; int idx;
    for(int i=0; i<n-1; i++){
        idx=i;
        for(int j=i+1; j<n; j++){
            if(sum(st[j])>sum(st[idx])) idx=j;
        }
        if(sum(st[idx])>sum(st[i])){
            tmp=st[i]; st[i]=st[idx]; st[idx]=tmp;
        }
    }
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        scanf("\n");
        st[n].code=n+1;
        gets(st[n].name);
        gets(st[n].birth);
        scanf("%f %f %f", &st[n].p1, &st[n].p2, &st[n].p3);
        ++n;
    }
    sort();
    for(int i=0; i<n; i++){
        printf("%d %s %s %0.1f\n", st[i].code, st[i].name, st[i].birth, sum(st[i]));
    }
    return 0;
}