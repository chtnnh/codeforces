#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		if (n == 1 || n == 2 || n == 0) {
			printf("0\n");
			continue;
		}
		else if (n % 2 == 1) {
			printf("%d\n", (n - 1)/2);
			continue;
		}
		else {
			printf("%d\n", (n/2) - 1);
			continue;
		}
	}
	return 0;
}
