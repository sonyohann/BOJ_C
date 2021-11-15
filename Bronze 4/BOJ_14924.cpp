#include<stdio.h>
int main(){
	int s, t, d;
	scanf("%d %d %d", &s, &t, &d);
	
	int num = d / (s * 2);
	int num2 = num * t;
	
	printf("%d", num2);
	
	
	return 0;
}
