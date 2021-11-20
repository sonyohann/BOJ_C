#include<stdio.h>
int main(){
	int arr[3] = {};
	int i;
	int min = 10000001;
	int max = 0, mid = 0;
	
	for(i = 0; i < 3; i++){
		scanf("%d", &arr[i]);
		if(min > arr[i]){
			min = arr[i];
		} 
		if(max < arr[i]){
			max = arr[i];
		}
	}
	
	for(i = 0; i < 3; i++){
		if(max != arr[i] && min != arr[i]){
			mid = arr[i];
		}
	}
	
	
	
	printf("%d %d %d", min, mid, max);
	
	
	return 0;
}
