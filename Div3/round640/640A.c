#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		int arr[5] = {0, 0, 0, 0, 0};
		int j = 0, sum = 0;
		while (n > 0) {
			arr[j] = n % 10;
			if (arr[j])
				sum++;
			n /= 10;
			j++;
		}
		printf("%d\n", sum);
		int mul = 1;
		for (int k = 0; k < 5; k++) {
			if(arr[k])
				printf("%d ", arr[k] * mul);
			mul *= 10;
		}
		printf("\n");
	}
	return 0;
}
