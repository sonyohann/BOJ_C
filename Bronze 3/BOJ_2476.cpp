#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int a, b, c;
	int arr[1000];
	int max = 0, result = 0;
	
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a == b && a == c & b == c) {
			arr[i] = 10000 + a * 1000;
		}
		else if(a == b || a == c) {
			arr[i] = 1000 + a * 100;
		} else if(b == c) {
			arr[i] = 1000 + b * 100;
		}
		else {
			if(a > b && a > c) {
				max = a;
			} else if(b > a && b > c) {
				max = b;
			} else if(c > a && c > b) {
				max = c;
			}
			arr[i] = max * 100;
		}
		if(arr[i] > result) {
			result = arr[i];
		}
	}
	
	printf("%d", result);
	
	
	
	return 0;
}
