#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int result = n;
	
	int num1, num2, num3, num4;
	int count = 0;
	
	while(1){
		num1 = result / 10;
		num2 = result % 10;
		num3 = num1 + num2;
		num4 = (num2 * 10) + (num3 % 10); 
		result = num4;
		count++;
		if(result == n){
			break;
		}
	}
	
	
	printf("%d", count);
	
	
	return 0;
}
