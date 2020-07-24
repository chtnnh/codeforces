#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	char arr[n][n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	char let1 = arr[0][0], let2 = arr[0][1];
	if (let1 == let2) {
		cout << "NO\n";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1) {
				if (arr[i][j] != let1) {
					cout << "NO\n";
					return 0;
				}
			}
			else if (arr[i][j] != let2) {
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
	return 0;
}
