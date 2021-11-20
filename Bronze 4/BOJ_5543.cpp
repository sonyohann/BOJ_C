#include<stdio.h>
int main(){
	
	int arr1[10] = {};
	int arr2[5] = {};
	int i, j, result = 0;
	int min1 = 2001, min2 = 2001;
	
	for(i = 0; i < 3; i++){
		scanf("%d", &arr1[i]);
		if(min1 > arr1[i])
		min1 = arr1[i];
	}
	
	
	for(j = 0; j < 2; j++){
		scanf("%d", &arr2[j]);
		if(min2 > arr2[j])
		min2 = arr2[j];
	}
	
	result = min1 + min2 - 50;
	printf("%d", result);
	
	
	
	return 0;
	
}
