#include <iostream>
using namespace std;
int main() {
	int x,n;
	cin >> x >> n;

	int arr[50];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int left=0, right=n-1, mid;
	while (left <= right) {
		for (int i = 0; i < n; ++i) {
			mid = (right + left) / 2;
			if (arr[mid] == x) {
				cout << "Yes\n";
				return 0;
			}
			if (arr[mid] > x) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}
	cout << "No\n";
	return 0;
}