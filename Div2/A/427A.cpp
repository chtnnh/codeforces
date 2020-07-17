#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], sum = 0, count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[n];
		if (arr[n] < 0) {
			if (sum == 0)
				count++;
			else
				sum += arr[n];
		}
		else
			sum += arr[n];
	}
	cout << count << endl;
	return 0;
}
