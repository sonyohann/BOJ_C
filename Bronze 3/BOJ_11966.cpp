#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int num = 1;
	
	for(i = 0; i < 30; i++){
		if(num == n){
			printf("1");
			return 0;
		}
		num *= 2;
	}
	
	printf("0");
}
