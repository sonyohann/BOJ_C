#include<stdio.h>
int main(){
	int arr[10];
	int n, i, count = 0;
	scanf("%d", &n);
	for(i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
		if(arr[i] == n){
			count++;
		}
	}
	
	printf("%d", count);
	
	
	return 0;
}

