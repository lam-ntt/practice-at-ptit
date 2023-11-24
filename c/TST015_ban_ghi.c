#include<stdio.h>
#include<math.h>

struct triangle{
    float a, b, c;
    float s;
};
typedef struct triangle triangle;

void read(triangle *t){
    scanf("%f %f %f", &t->a, &t->b, &t->c);
}

void cal(triangle *t){
    float p=(t->a+t->b+t->c)/2;
    t->s=sqrt(p*(p-t->a)*(p-t->b)*(p-t->c));
}

void print(triangle t){
    printf("%.0f %.0f %.0f\n", t.a, t.b, t.c);
}

void sort(triangle tg[], int n){
    int idx;
    triangle tmp;
    for(int i=0; i<n-1; i++){
        idx=i;
        for(int j=i+1; j<n; j++){
            if(tg[j].s<tg[idx].s) idx=j;
        }
        if(tg[i].s>tg[idx].s){
            tmp=tg[i]; tg[i]=tg[idx]; tg[idx]=tmp;
        }
    }
}

int main(){
    int n; scanf("%d", &n);
    triangle tg[105];
    for(int i=0; i<n; i++){
        read(&tg[i]);
        cal(&tg[i]);
    }
    sort(tg, n);
    for(int i=0; i<n; i++){
        print(tg[i]);
    }
    return 0;
}