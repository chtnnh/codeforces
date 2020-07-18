#include<iostream>

using namespace std;

int main() {
	int n, b, d;
	cin >> n >> b >> d;
	int arr[n], waste = 0, count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] <= b)
			waste += arr[i];
		if (waste > d) {
			waste = 0;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
