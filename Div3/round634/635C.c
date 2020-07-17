#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		int arr[n];
		int distinct[n];
		for (int j = 0; i < n; i++) {
			scanf("%d", arr[j]);
			for (
		// the answer is the min of n/2, distinct qualities and frequency of highest repeating
		// quality

