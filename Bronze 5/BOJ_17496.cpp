#include<stdio.h>
int main(){
	int n, t, c, p, i;
	scanf("%d %d %d %d", &n, &t, &c, &p);
	
	int num = 0, count = 0;
	
	for(i = 0; i < n; i++){
		num = num + t;
		if(num >= n){
			break;
		}
		count++;
	}
	
	printf("%d", count * c * p);
	
	return 0;
}
