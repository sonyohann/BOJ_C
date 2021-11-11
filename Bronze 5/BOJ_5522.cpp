#include<stdio.h>
int main(){
	
	int i, n, sum = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &n);
		sum += n;
	}
	
	
	printf("%d", sum);
	
	
	return 0;
}
