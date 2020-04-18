#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int arrRobo[n], arrBion[n], common = 0, robo = 0, bionic = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrRobo[i]);
		robo += arrRobo[i];
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrBion[i]);
		bionic += arrBion[i];
	}
	for (int i = 0; i < n; i++) {
		if (arrRobo[i] && arrBion[i])
			common += 1;
	}
	// Essentialy the only extra information required is number of common problems
	// after that it is elementary
	if (common == n || common == robo)
		printf("-1\n");
	else 
		printf("%d\n", ((bionic - common)/(robo - common)) + 1);
	return 0;
}
