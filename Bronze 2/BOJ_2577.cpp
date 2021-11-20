#include<stdio.h>
int main(){
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a * b * c;
	int arr[10] = {};
	int num;
	
	while(sum > 0){
		num = sum % 10;
		arr[num]++;
		sum /= 10;
	}
	
	for(i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}
	
	
	return 0;
}
