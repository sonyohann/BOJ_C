#include<stdio.h>
int main(){
	int arr[10];
	int i, num = 0, max = 0;

	for(i = 0; i < 9; i++){
		scanf("%d", &arr[i]);
		if(max < arr[i]){
			max = arr[i];
			num = i + 1;
		}
	}
	
	printf("%d\n%d", max, num);
	
	return 0;
}
