#include<stdio.h>
int main(){
	int t, i;
	scanf("%d", &t);
	int num1, num2;
	int sum = 0;
	
	for(i = 1; i <= t; i++){
		scanf("%d %d", &num1, &num2);
		sum = num1 + num2;
		printf("Case %d: %d\n", i, sum);
	}
	
	return 0;
}
