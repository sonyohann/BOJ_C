#include<stdio.h>
#include<stdlib.h>
int main(){
	long long n, m;
	scanf("%lld %lld", &n, &m);
	
	long long sum = 0;
	sum = llabs(n - m);
	printf("%lld", sum);

	return 0;
	
}
