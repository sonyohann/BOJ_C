#include<stdio.h>
int main(){
	int arr[6] = {1, 1, 2, 2, 2, 8};
	int arr2[10] = {};
	int i;
	
	for(i = 0; i < 6; i++){
		scanf("%d", &arr2[i]);
	}
	
	for(i = 0; i < 6; i++){
		printf("%d ", arr[i] - arr2[i]);
	}

	return 0;
}
