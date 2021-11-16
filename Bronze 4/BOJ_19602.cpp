#include<stdio.h>
int main(){
	int s, m, l;
	scanf("%d %d %d", &s, &m, &l);
	
	int num1 = 1 * s + 2 * m + 3 * l;
	
	if(num1 >= 10)
	printf("happy");
	else
	printf("sad");
	
	
	return 0;
}
