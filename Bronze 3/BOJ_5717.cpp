#include<stdio.h>
int main(){
	int m, f;
	int sum = 0;
	
	while(1){
		scanf("%d %d", &m, &f);
		sum = m + f;
		if(m == 0 && f == 0){
			break;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
