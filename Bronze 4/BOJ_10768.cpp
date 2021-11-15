#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(a == 2 && b == 18){
		printf("Special");
	} if(a < 2){
		printf("Before");
	} else if(a > 2){
		printf("After");
	} else{
		if(b < 18){
			printf("Before");
		} else if (b > 18){
			printf("After");
		}
	}
	
	
	return 0;
}
