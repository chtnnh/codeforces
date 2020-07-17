#include<iostream>

using namespace std;

int main() {
	int a, b, c, d, count = 0;
	cin >> a >> b >> c >> d;
	if (a == b)
		count++;
	if (b == c)
		count++;
	if (c == d)
		count++;
	if (a == c)
		count++;
	if (a == d)
		count++;
	if (b == d)
		count++;
	cout << count/2 + (count % 2) << endl;
	return 0;
}
