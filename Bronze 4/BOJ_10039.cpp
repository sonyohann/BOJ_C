#include<stdio.h>
int main(){
	int i, sum = 0;
	int arr[6] = {};
	for(i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
		if(arr[i] < 40){
			arr[i] = 40;
		}
		sum += arr[i];
	}
	
	printf("%d", sum / 5);
	
	return 0;
}
