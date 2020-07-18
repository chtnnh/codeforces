#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], arrp[n], arrm[n], arrs[n], p = 0, m = 0, s = 0, j = 0, k = 0, l = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 1) {
			arrp[j++] = i;
			p++;
		}
		else if (arr[i] == 2) {
			arrm[k++] = i;
			m++;
		}
		else {
			arrs[l++] = i;
			s++;
		}
	}
	int min = p;
	if (min > m)
		min = m;
	if (min > s)
		min = s;
	cout << min << endl;
	for (int i = 0; i < min; i++)
		cout << arrp[i] + 1 << " " << arrm[i] + 1 << " " << arrs[i] + 1 << endl;
	return 0;
}
