
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	double arr[50];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	double min = arr[0], max = arr[0];

	for (int i = 0; i < n; ++i) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	
	}
	cout << "Max number is: " << max << endl;
	cout << "Min number is: " << min << endl;

	return 0;
}