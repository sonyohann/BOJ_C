#include<stdio.h>
int main(){
	int l, p, a, i;
	scanf("%d %d", &l, &p);
	
	int c = l * p;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &a);
		printf("%d ", a - c);
	}
	
	return 0;
}
