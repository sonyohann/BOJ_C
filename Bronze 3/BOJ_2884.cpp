#include<stdio.h>
int main(){
	int h, m;
	scanf("%d %d", &h, &m);
	
	m -= 45;
	
	while(1){
	if(h > 0 && m >= 0) {
		printf("%d %d", h, m);
		break;
	} else if(h > 0 && m < 0) {
		h--;
		m = 60 + m;
		printf("%d %d", h, m);
		break;
	}
	
	if(h == 0 && m >= 0) {
		printf("%d %d", h, m);
		break;
	} else if(h == 0 && m < 0) {
		h = 23;
		m = 60 + m;
		printf("%d %d", h, m);
		break;
	}
}
	
	
	
	return 0;
}
