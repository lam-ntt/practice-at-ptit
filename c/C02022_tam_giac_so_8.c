#include<stdio.h>

int add(){
	static int n=0;
	return ++n;
}

int main(){
	int a[30][30];
	int n; scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i%2==1){
			for(int j=1; j<=i; j++){
				a[i][j]=add();
		    }
		}else{
			for(int j=i; j>=1; j--){
				a[i][j]=add();
		    }
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
