#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int num1 = abs(a - b);
	int num2 = abs(c - d);
	
	if(num1 > num2){
		printf("%d", num1 - num2);
	} else if(num1 < num2){
		printf("%d", num2 - num1);
	} else{
		printf("%d", num1 - num2);
	}
	
	return 0;
}
