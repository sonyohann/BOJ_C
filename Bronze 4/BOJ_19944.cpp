#include<stdio.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a = 0;
	
	if(m == 1 || m == 2){
		printf("NEWBIE!");
		a = 1;
	} else if(m <= n && a != 1){
		printf("OLDBIE!");
	} else{
		printf("TLE!");
	}
	
	return 0;
}
