#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n + 2];
	arr[0] = 0;
	arr[n + 1] = 0;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		arr[x - 1] += y - 1;
		arr[x + 1] += arr[x] - y;
		arr[x] = 0;
	}
	for (int i = 1; i <= n; i++)
		cout << arr[i] << endl;
	return 0;
}
