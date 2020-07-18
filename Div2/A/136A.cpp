#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], gift[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		gift[arr[i] - 1] = i;
	}
	for (int i = 0; i < n; i++)
		cout << gift[i] + 1 << " ";
	cout << endl;
	return 0;
}

