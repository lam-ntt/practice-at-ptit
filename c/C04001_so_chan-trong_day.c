#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int tmp;
		for(int i=0; i<n; i++){
			scanf("%d", &tmp);
			if(tmp%2==0){
				printf("%d ", tmp);
			}
		}
		printf("\n");
	}
}
