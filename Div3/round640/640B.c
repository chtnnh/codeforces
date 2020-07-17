#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, k;
		scanf("%d%d", &n, &k);
		if ((n % 2 == 1 && k % 2 == 0) || n < k)
			printf("NO\n");
		else if () {

