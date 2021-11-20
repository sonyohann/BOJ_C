#include<stdio.h>
#include<string.h>
int main(){
	
	int t, r, i, j, k = 0;
	scanf("%d", &t);
	char s[20]; 
	
	for(i = 0; i < t; i++){
		scanf("%d %s", &r, &s);
		for(j = 0; j < strlen(s); j++){
			for(k = 0; k < r; k++){
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
