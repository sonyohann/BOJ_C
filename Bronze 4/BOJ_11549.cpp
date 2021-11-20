#include<stdio.h>
int main(){
	int t, i;
	scanf("%d", &t);
	int arr[5] = {};
	int count = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
		if(arr[i] == t){
			count++;
		}
	}
	
	printf("%d", count);
	
	
	return 0;	
}
