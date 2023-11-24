#include<stdio.h>
#include<string.h>

struct Item{
    int code;
    char name[105];
    char group[105];
    float p1, p2;
};

typedef struct Item item;

int n=0; item it[1005];

float value(item s){
    return s.p2-s.p1;
}

void sort(){
    item tmp; int idx;
    for(int i=0; i<n-1; i++){
        idx=i;
        for(int j=i+1; j<n; j++){
            if(value(it[j])>value(it[idx])) idx=j;
        }
        if(value(it[idx])>value(it[i])){
            tmp=it[i]; it[i]=it[idx]; it[idx]=tmp;
        }
    }
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        scanf("\n");
        it[n].code=n+1;
        gets(it[n].name);
        gets(it[n].group);
        scanf("%f %f ", &it[n].p1, &it[n].p2);
        ++n;
    }
    sort();
    for(int i=0; i<n; i++){
        printf("%d %s %s %0.2f\n", it[i].code, it[i].name, it[i].group, value(it[i]));
    }
    return 0;
}