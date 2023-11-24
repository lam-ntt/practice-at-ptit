#include<stdio.h>

int mx(int a[], int n){
	int mx=a[0];
	for(int i=1; i<n; i++){
		if(a[i]>mx) mx=a[i];
	}
	return mx;
}

int mn(int a[], int n){
	int mn=a[0];
	for(int i=1; i<n; i++){
		if(a[i]<mn) mn=a[i];
	}
	return mn;
}

int main(){
	int x[4], y[4];
	for(int i=0; i<4; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	int width=mx(x, 4)-mn(x, 4);
	int length=mx(y, 4)-mn(y, 4);
	int c=width>length?width:length;
	printf("%d", c*c);
	return 0;
}
