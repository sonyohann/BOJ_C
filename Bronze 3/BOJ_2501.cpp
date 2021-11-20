#include<stdio.h>
int main(){
	int n, k, i;
	scanf("%d %d", &n, &k);
	
	int cnt = 0;
	int num = 0;
	
	for(i = 1; i <= n; i++){
		num = n % i; 
		if(num == 0){
			cnt++;
			if(cnt == k){
				printf("%d", i);
			}
		} 
	}
	
	if(cnt < k){
		printf("0");
	}
	
	
	return 0;
}
