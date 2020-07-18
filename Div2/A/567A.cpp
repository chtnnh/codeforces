#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int line[n];
	for (int i = 0; i < n; i++)
		cin >> line[i];
	cout << line[1] - line[0] << " " << line[n - 1] - line[0] << endl;
	for (int i = 1; i < n - 1; i++) {
		int min = line[i + 1] - line[i];
		int max = line[n - 1] - line[i];
		if (min > line[i] - line[i - 1])
			min = line[i] - line[i - 1];
		if (max < line[i] - line[0])
			max = line[i] - line[0];
		cout << min << " " << max << endl;
	}
	cout << line[n - 1] - line[n - 2] << " " << line[n - 1] - line [0] << endl;
	return 0;
}
