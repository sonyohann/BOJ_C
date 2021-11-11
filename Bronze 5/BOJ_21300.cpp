#include<stdio.h>
int main(){
	
	int arr[10] = {};
	int sum = 0;
	for(int i = 0; i < 6; i++){
		scanf("%d", &arr[i]);
		sum = sum + arr[i];	
	}
	
	printf("%d", sum * 5);
	
	return 0;
}
