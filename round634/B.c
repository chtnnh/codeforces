#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, a, b;
		scanf("%d%d%d", &n, &a, &b);
		int ascii_a = 97;
		for (int j = 0; j < n; j++) 
			printf("%c", ascii_a + (j % b));
		printf("\n");
	}
	return 0;
}
