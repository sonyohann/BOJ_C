#include<stdio.h>
int main(){
	int n, x, i;
	scanf("%d %d", &n, &x);
	int arr[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(x > arr[i]){
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
