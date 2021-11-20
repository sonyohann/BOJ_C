#include<stdio.h>
int main(){
	int k, n, m, i;
	scanf("%d %d %d", &k, &n, &m);
	m = m - (k * n);
	int num = m;
	int count = 0;
	for(i = num; num < 0; num++){
		count++;
	}
	
	printf("%d", count);
	
	
	
	
	return 0;
}
