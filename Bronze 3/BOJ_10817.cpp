#include<stdio.h>
int main(){
	int arr[3] = {};
	int i, sum = 0; 
	int min = 101;
	int max = 0;
	
	for(i = 0; i < 3; i++){
		scanf("%d", &arr[i]);
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){	
			min = arr[i];
		}
		sum += arr[i];
	}
	
	printf("%d", sum - max - min);
	
	
	return 0;
}
