#include<stdio.h>

int main(void) {
	int t; // t = 400, n = 10e5
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		//int num[n];
		//num[0] = 4;
		if (n == 1) {
			printf("-1\n");
			continue;
		}
		printf("4");
		for (int j = 1; j < n; j++)
			printf("9");
		printf("\n"); // this is when you realise 49999.. works for all cases!
	}
	return 0;
}
