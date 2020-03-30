#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n); // n = 10e5, hence linear solution required
	int arrB[n], arrA[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arrB[i]);
	arrA[0] = arrB[0]; // first element is always same because x1 = 0
	int max = arrA[0]; // first element is current max
	printf("%d ", arrA[0]);
	for (int j = 1; j < n; j++) {
		if (arrB[j] >= 0) {
			max += arrB[j]; // if leftover is +ve, number is greater than max, update max
			arrA[j] = max; // init number
		}
		else
			arrA[j] = max + arrB[j]; // otherwise arrB = number - max
		printf("%d ", arrA[j]);
	}
	return 0;
}
