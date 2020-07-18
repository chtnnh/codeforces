#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], arr2[n + 1], j = n, count = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		if (arr[i] < j) {
			arr2[j] = arr[i];
			count++;
			cout << "\n";
		}
		else if (arr[i] == j) {
			cout << j;
			for (int l = 0; l < count; l++)
				cout << " " << arr2[j - l];
			cout << endl;
			j -= count + 1;
			count = 0;
		}
	}
	return 0;
}
