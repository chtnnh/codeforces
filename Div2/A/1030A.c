#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	for (; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1) { // if anyone thinks the problem is hard, execute
			i = -1;
			break;
		}
	}
	if (i == -1) // executes only if the loop was broken
		printf("HARD\n");
	else
		printf("EASY\n");
	return 0;
}
