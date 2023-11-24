#include<stdio.h>
#include<math.h>

int main(){
	int m, n; scanf("%d %d", &m, &n);
	int a=(int)sqrt(m);
	if(a*a<m) ++a;
	int cnt=0;
	for(int i=a; i*i<=n; i++){
		++cnt;
	}

	printf("%d\n", cnt);
	for(int i=a; i*i<=n; i++){
		printf("%d\n", i*i);
	}
	return 0;
}
