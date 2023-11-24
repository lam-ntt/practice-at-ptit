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
    
    float mx=-1;
    for(int i=0; i<n; i++){
        if(sum(st[i])>mx) mx=sum(st[i]);
    }

    for(int i=0; i<n; i++){
        if(sum(st[i])==mx) printf("%d %s %s %0.1f\n", st[i].code, st[i].name, st[i].birth, sum(st[i]));
    }
    return 0;
}