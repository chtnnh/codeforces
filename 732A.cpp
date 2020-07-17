#include<iostream>

using namespace std;

int main() {
	int price, change, i = 1;
	cin >> price >> change;
	if ((price * i) % 10 != change && (price * i) % 10 != 0)
		i++;
	cout << i << endl;
	return 0;
}
