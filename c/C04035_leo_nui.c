// Thứ nhất, quá trình leo lên là liên tục vì cứ hết người này lên đỉnh thì người tiếp theo sẽ đi lên
// Thứ hai, quá trình leo xuống có thể không liên tục
// + TH1, nếu quá trình leo xuống có xu hướng liên tục nhiều hơn -> tức là quá trình leo xuống trung bình lâu hơn leo lên
// + TH2, nếu quá trình leo xuống có xu hướng không liên tục nhiều hơn -> tức là quá trình leo xuống trung bình nhanh hơn leo lên (cụ thể là người leo lên chưa đến đỉnh núi thì người leo xuống đã xuống rồi)
// Như vậy quá trình nào có thời gian di chuyển trung bình cao hơn (hay là tổng thời gian nhiều hơn) thì một phần thời gian của bên nhiều hơn sẽ chứa được phần thời gian ít hơn
// Vậy thì, thời gian leo núi tối ưu có thể là
// + (1) thời gian của người leo lên nhanh nhất + tổng thời gian leo xuống
// -> cho người leo lên nhanh nhất đi đầu
// + (2) hoặc, thời gian của người leo xuống nhanh nhất + tổng thời gian leo lên
// -> cho người leo xuống nhanh nhất đi cuối
// (1) hay (2) lớn hơn thì sẽ là đáp án cuối cùng

#include<stdio.h>

int min(int arr[], int n){
	int min=arr[0];
	for(int i=1; i<n; i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

int main(){
	int U[25005], D[25005];
	int n ; scanf("%d", &n);
	int sumU=0, sumD=0;
	for(int i=0; i<n; i++){
		scanf("%d %d", &U[i], &D[i]);
		sumU+=U[i];
		sumD+=D[i];
	}
	
    if(sumU>sumD) 
	
	printf("%ld", sumU+min(D, n));
	else printf("%ld", sumD+min(U, n));
	return 0;
}
