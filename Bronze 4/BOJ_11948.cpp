#include<stdio.h>
int main(){
	int i, j;
	int arr[5] = {};
	int arr2[3] = {};
	
	int min1 = 101; 
	int min2 = 101;
	int sum = 0;
	
	for(i = 0; i < 4; i++){
		scanf("%d", &arr[i]);
		if(min1 > arr[i]){
			min1 = arr[i];
		}
		sum += arr[i];
	}
	
	sum -= min1;
	
	for(j = 0; j < 2; j++){
		scanf("%d", &arr2[j]);
		if(min2 > arr2[j]){
			min2 = arr2[j];
		}
		sum += arr2[j];
	}
	
	sum -= min2;
	
	
	printf("%d", sum);
	
	
	return 0;
}
