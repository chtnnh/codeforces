#include<iostream>

using namespace std;

int main() {
	unsigned long long int l, r;
	cin >> l >> r;
	unsigned long long int a, b, c = 0;
	if (l != 1)
		a = l;
	else
		a = 2;
	b = a + 1;
	for (int i = 2; i <= 50; i++) {
		if (a % i == 0) {
			if (a + i <= r) {
				c = a + i;
				break;
			}
		}
	}
	if (c)
		cout << a << " " << b << " " << c << endl;
	else
		cout << "-1\n";
	return 0;
}
