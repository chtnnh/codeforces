#include<iostream>

using namespace std;

int main() {
	long int n, x;
	cin >> n >> x;
	int dis = 0;
	for (int i = 0; i < n; i++) {
		char ch;
		long int temp;
		cin >> ch >> temp;
		if (ch == '+')
			x += temp;
		else if (x >= temp)
			x -= temp;
		else 
			dis++;
	}
	cout << x << " " << dis << endl;
	return 0;
}
