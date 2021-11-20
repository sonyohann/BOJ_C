#include<stdio.h>
int main(){
	int h, m, t;
	int num = 0;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	m += t;
	
	if(m > 59){
		num = m / 60;
		m = m % 60;
		h += num;
		if(h > 23){
			h = h % 24;
		}
	}
	
	printf("%d %d", h, m);
	
	return 0;
}
