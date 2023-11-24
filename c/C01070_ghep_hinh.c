#include<stdio.h>

int check(int w[], int h[]){
    if(h[0]==h[1]&&h[1]==h[2]&&h[0]==w[0]+w[1]+w[2]) return 1;

    int idx=0;
    for(int i=0; i<3; i++){
        if(h[i]>h[idx]) idx=i;
    }
    if(idx==0){
        if(h[0]==h[1]+h[2]&&w[1]==w[2]&&w[0]+w[1]==h[0]) return 1;
        if(h[0]==w[1]+w[2]&&h[1]==h[2]&&w[0]+h[1]==h[0]) return 1;
        if(h[0]==h[1]+w[2]&&w[1]==h[2]&&w[0]+w[1]==h[0]) return 1;
        if(h[0]==w[1]+h[2]&&h[1]==w[2]&&w[0]+h[1]==h[0]) return 1;
    }else if (idx==1){
        if(h[1]==h[0]+h[2]&&w[0]==w[2]&&w[1]+w[0]==h[1]) return 1;
        if(h[1]==w[0]+w[2]&&h[0]==h[2]&&w[1]+h[0]==h[1]) return 1;
        if(h[1]==h[0]+w[2]&&w[0]==h[2]&&w[1]+w[0]==h[1]) return 1;
        if(h[1]==w[0]+h[2]&&h[0]==w[2]&&w[1]+h[0]==h[1]) return 1;
    }else{
        if(h[2]==h[0]+h[1]&&w[0]==w[1]&&w[2]+w[0]==h[2]) return 1;
        if(h[2]==w[0]+w[1]&&h[0]==h[1]&&w[2]+h[0]==h[2]) return 1;
        if(h[2]==h[0]+w[1]&&w[0]==h[1]&&w[2]+w[0]==h[2]) return 1;
        if(h[2]==w[0]+h[1]&&h[0]==w[1]&&w[2]+h[0]==h[2]) return 1;
    }
    return 0;

}

int main(){
    int w[3], h[3];
    for(int i=0; i<3; i++){
        scanf("%d %d", &w[i], &h[i]);
        if(w[i]>h[i]){
            int tmp=w[i]; w[i]=h[i]; h[i]=tmp;
        }
    }
    if(check(w, h)) printf("YES\n");
    else printf("NO\n");
    return 0;
}