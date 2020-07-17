#include<bits/stdc++.h>

using namespace std;

int main() {
	string ex;
	cin >> ex;
	int dist, i = 1;
	dist = (int('a') - int(ex[0])) % 26;
	while (ex[i] != '\0')
		dist += (int(ex[i]) - int(ex[i - 1])) % 26;
	cout << dist << endl;
	return 0;
}
