#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int arr[n];
	int max, min;
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		
		if(i == 0){
		min = arr[i];
		max = arr[i];
		}
		if(min >= arr[i]){
			min = arr[i];
		}
		if(max <= arr[i]){
			max = arr[i];
		}
	}
	
	printf("%d %d", min, max);
	
	
	return 0;
}
