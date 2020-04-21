#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		if ((n/2) % 2 == 1) {
			printf("NO\n");
			continue;
		}
		else {
			printf("YES\n");
			for (int j = 1; j <= n / 2; j++)
				printf("%d ", j * 2);
			for (int j = 1; j < n / 2; j++)
				printf("%d ", (j * 2) - 1);
			printf("%d\n", (3*n)/2 - 1);
		}
	}
	return 0;
}
