#include<stdio.h>
int main(){
	
	int n, i, sum = 0;
	scanf("%d", &n);
	char num1[n];
	scanf("%s", num1);
	
	for(i = 0; i < n; i++){
		sum += num1[i] - '0';
	}
	
	printf("%d", sum);
	
	
	return 0;
}
