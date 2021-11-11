#include<stdio.h>
int main(){
	int l;
	scanf("%d", &l);
	int num1 = l / 5;
	
	if(l % 5 != 0){
		num1++;
	}
	
	printf("%d", num1);
	
	return 0;
}
