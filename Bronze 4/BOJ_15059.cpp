#include<stdio.h>
int main(){
	int a1, b1, c1;
	scanf("%d %d %d", &a1, &b1, &c1);
	int a2, b2, c2;
	scanf("%d %d %d", &a2, &b2, &c2);
	
	int i, j, k, count = 0;
	int num1 = a1 - a2;
	if(num1 < 0){
		for(i = num1; i < 0; i++){
			count++;
		}
	}
	int num2 = b1 - b2;
	if(num2 < 0){
		for(j = num2; j < 0; j++){
			count++;
		}
	}
	int num3 = c1 - c2;
	if(num3 < 0){
		for(k = num3; k < 0; k++){
			count++;
		}
	}
	
	printf("%d", count);
	
	
	return 0;
}
