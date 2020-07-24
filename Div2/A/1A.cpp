#include<iostream>

using namespace std;

int main() {
	long long int n, m, a;
	cin >> n >> m >> a;
	long long int count = (n / a);
	if (n % a)
		count++;
	long long int count2 = (m / a);
	if (m % a)
		count2++;
	cout << count * count2 << endl;
	return 0;
}
