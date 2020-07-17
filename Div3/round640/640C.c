#include<stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, k;
		scanf("%d%d", &n, &k);
		int mod = k % (n - 1);
		int mul = k / (n - 1);
		if (mod)
			printf("%d\n", n * mul + mod);
		else
			printf("%d\n", n * mul - 1);
	}
	return 0;
}
