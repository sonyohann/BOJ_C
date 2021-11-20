#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a + b;
	int k = c * 2;
	
	if(sum >= k){
		sum -= k;
		printf("%d", sum);
	} else {
		printf("%d", sum);
	}
	
	
	return 0;
}
