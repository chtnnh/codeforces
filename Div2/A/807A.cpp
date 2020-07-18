#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr1[n], arr2[n], arr3[n];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i] >> arr2[i];
		arr3[i] = arr1[i];
	}
	sort(arr3, arr3 + n, greater<int>());
	int i;
	for (i = 0; i < n; i++) {
		if (arr1[i] != arr3[i])
			i = n+1;
	}
	if (i == n+1) {
		int j;
		for (j = 0; j < n; j++) {
			if (arr1[j] != arr2[j])
				j = n + 1;
		}
		if (j == n+1) 
			cout << "rated\n";
		else 
			cout << "unrated\n";
	}
	else {
		int j;
                for (j = 0; j < n; j++) {
                        if (arr1[j] != arr2[j])
                                j = n + 1;
                }
                if (j == n+1)
                        cout << "rated\n";
                else
                        cout << "maybe\n";
	}
	return 0;
}
