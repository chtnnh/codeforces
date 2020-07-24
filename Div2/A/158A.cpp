#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int max = 0;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > 0)
			max = i + 1;
	}
	int j = k - 1, count = k - 1;
	while (arr[j] == arr[k - 1]) {
		count++;
		j++;
	}
	if (max > count)
		max = count;
	cout << max << endl;
	return 0;
}
