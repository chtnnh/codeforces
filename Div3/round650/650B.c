#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, count = 0;
		scanf("%d", &n);
		int arr[n];
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
			if (arr[j] % 2 != j % 2)
				count++;
		}
		if (count % 2 == 1)
			printf("-1\n");
		else
			printf("%d\n", count / 2);
	}
	return 0;
}

