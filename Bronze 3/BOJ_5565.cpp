#include<stdio.h>
int main(){
	int n, i;
	int result, num1;
	scanf("%d", &result);
	int sum = 0;
	
	for(i = 0; i < 9; i++){
		scanf("%d", &n);
		sum += n;
	}
	
	num1 = result - sum;
	
	printf("%d", num1);
	
	
	return 0;
}
