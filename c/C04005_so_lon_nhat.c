 #include<stdio.h>
 
 int main(){
 	int t; scanf("%d", &t);
 	while(t--){
 		int n; scanf("%d", &n);
 		int a[n], mx=0;
 		for(int i=0; i<n; i++){
 			scanf("%d", &a[i]);
 			if(a[i]>mx) mx=a[i];
		}
		
		printf("%d\n", mx);
		for(int i=0; i<n; i++){
		 	if(a[i]==mx) printf("%d ", i);
		}
		printf("\n");
	 }
 	return 0;
 }
