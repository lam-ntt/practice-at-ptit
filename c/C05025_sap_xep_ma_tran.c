#include<stdio.h>
#include<stdlib.h>
#define ll long long

int a[1005][1005];

int cmp(const void *x, const void *y){
    int *e=(int*)x;
    int *f=(int*)y;
    if(*e<*f) return -1;
    else return 1;
}

int main(){
    int t; scanf("%d", &t);
    int cnt=1;
    while(t--){
        int r, c; scanf("%d %d", &r, &c);
        int b[r*c];
        for(int i=0; i<r*c; i++){
            scanf("%d", &b[i]);
        }
        qsort(b, r*c, sizeof(int), cmp);

        int cnt2=0;
        for(int i=0; i<c; i++){
            int row=0, col=i;
            while(0<=row&&row<r&&0<=col&&col<c){
                a[row][col]=b[cnt2++];
                ++row; --col;
            }
        }
        for(int i=1; i<r; i++){
            int row=i, col=c-1;
            while(0<=row&&row<r&&0<=col&&col<c){
                a[row][col]=b[cnt2++];
                ++row, --col;
            }
        }

        printf("Test %d:\n", cnt++);
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

// #include<stdio.h>

// int checkPriority(int i1, int j1, int i2, int j2){
//     if((i1+j1)!=(i2+j2)) return (i1+j1)<(i2+j2);
//     else return i1<i2;
// }

// int main(){
//     int t; scanf("%d", &t);
//     int cnt=1;
//     while(t--){
//         int n, m; scanf("%d %d", &n, &m);
//         int a[10][10];
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 scanf("%d", &a[i][j]);
//             }
//         }

//         int tmp;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 for(int e=0; e<n; e++){
//                     for(int f=0; f<m; f++){
//                         if(checkPriority(i, j, e, f)&&a[i][j]>a[e][f]){
//                             tmp=a[i][j]; a[i][j]=a[e][f]; a[e][f]=tmp;
//                         }
//                     }
//                 }
//             }
//         }

//         printf("Test %d:\n", cnt++);
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }