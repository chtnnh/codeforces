#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ser = 0, dim = 0, j = 0, k = n-1;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (arr[j] > arr[k]) {
				ser += arr[j];
				j++;
			}
			else {
				ser += arr[k];
				k--;
			}
		}
		else {
			if (arr[j] > arr[k]) {
                                dim += arr[j];
                                j++;
                        }
                        else {
                                dim += arr[k];
                                k--;
                        }
                }
	}
	cout << ser << " " << dim << endl;
	return 0;
}
