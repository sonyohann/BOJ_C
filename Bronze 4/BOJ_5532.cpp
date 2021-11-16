#include<stdio.h>
int main(){
	int l, a, b, c, d;
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	
	int num1 = c;
	int num2 = d;
	int count = 1;	
	
	while(1){
		c += num1;
		d += num2;
		count++;
		if(c >= a && d >= b){
			break;
		}
	}
	
	printf("%d", l - count);
	
	
	return 0;
}
