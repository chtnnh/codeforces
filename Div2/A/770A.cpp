#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n / k; i++) {
		for (int j = 0; j < k; j++)
			cout << char(int('a') + j);
	}
	for (int i = 0; i < n % k; i++)
		cout << char(int('a') + i);
	cout << endl;
	return 0;
}
