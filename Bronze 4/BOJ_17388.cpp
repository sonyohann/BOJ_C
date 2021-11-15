#include<stdio.h>
int main(){
	
	int s, k, h;
	scanf("%d %d %d", &s, &k, &h);
	int sum = s + k + h;
	
	if(sum >= 100){
		printf("OK");
	} else if(s < k && s < h){
		printf("Soongsil");
	} else if(k < s && k < h){
		printf("Korea");
	} else if(h < s && h < k){
		printf("Hanyang");
	}
	
	return 0;
}
