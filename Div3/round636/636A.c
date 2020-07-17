#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		// x * ((2 ** k) - 1) == n 
		int k = 4;
		while(1) {
			if (n % (k - 1) == 0) {
				printf("%d\n", n/(k - 1));
				break;
			}
			else 
				k *= 2;
		}
	}
	return 0;
}
