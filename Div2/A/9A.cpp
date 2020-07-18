#include<iostream>

using namespace std;

int main() {
	int a, b, c, max = 0;
	cin >> a >> b;
	max = a;
	if (b > max)
		max = b;
	int count = 7 - max;
	if (count == 6)
		cout << "1/1" << endl;
	else if (count == 3)
		cout << "1/2" << endl;
	else if (count == 2)
		cout << "1/3" << endl;
	else if (count == 4)
		cout << "2/3" << endl;
	else
		cout << count << "/6\n";
	return 0;
}
