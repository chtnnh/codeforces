#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	float check = 0.5;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0)
			arr[i] /= 2;
		else {
			arr[i] = int(arr[i] / 2.0 + check);
			check = -check;
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}
