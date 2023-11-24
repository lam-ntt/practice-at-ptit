#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int cnt=1;
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		
		int dis=1, tmp=1;
		for(int i=1; i<n; i++){
			if(a[i]>a[i-1]){
				++tmp;
				if(tmp>dis) dis=tmp;
			}else{
				tmp=1;
			}
		}

		printf("Test %d: \n", cnt++);
		printf("%d\n", dis);
		tmp=1;
		for(int i=1; i<n; i++){
			if(a[i]>a[i-1]){
				++tmp;
				if(tmp==dis){
					for(int j=i-dis+1; j<=i; j++){
						printf("%d ", a[j]);
					}
					printf("\n");
				}
			}else{
				tmp=1;
			}
		}
	}
	return 0;
}
