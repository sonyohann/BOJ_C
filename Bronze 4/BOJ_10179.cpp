#include<stdio.h>
int main(){
	int t, i;
	scanf("%d", &t);
	double n;
	
	for(i = 0; i < t; i++){
		scanf("%lf", &n);
		printf("$%.2lf\n", n - (n / 5));
	}
	
	return 0;
}
