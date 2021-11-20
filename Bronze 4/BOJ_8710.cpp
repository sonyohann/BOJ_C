#include<stdio.h>
int main(){
	int k, w, m, i;
	scanf("%d %d %d", &k, &w, &m);
	int num = k;
	int count = 0;
	
	for(i = k; i < w; i++){
		num += m;
		count++;
		if(num >= w){
			break;
		}
	}
	
	printf("%d", count);
	
	
	return 0;
}
