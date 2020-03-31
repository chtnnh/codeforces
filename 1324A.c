#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		int arrA[n];
		for (int j = 0; j < n; j++) {
			scanf("%d", &arrA[j]);
			// arrB[j] = arrA[j] % 2;
		}
		int j, check = arrA[0] % 2;
		for (j = 1; j < n; j++) {
			if ((arrA[j] % 2) != check)
				j = 200;
		}
		if (j == 201)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
