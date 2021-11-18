#include<stdio.h>
int main(){
	char c;
	int cnt = 0;
	while(scanf("%c", &c) != EOF){
		printf("%c", c);
		cnt++;
		if(cnt % 10 == 0){
			printf("\n");
		}
	}
	
	return 0;
}
