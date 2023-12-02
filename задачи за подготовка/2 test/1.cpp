#include <iostream>
using namespace std;

int digit(int num, int k) {
	int digit = 0;
	int arr[50];
	int j = 0;
	while (num != 0) {
		digit = num % 10;
		arr[j] = digit;
		num /= 10;
		j++;
	}
	k = j - k;
	for (int i = 0; i < j; i++) {
		if (i  == k) {
			return arr[i];
		}
	}
	return -1;
}

int main() {
	int num, k;
	cin >> num >> k;
	int dig = digit(num, k);
	cout << dig << endl;

	return 0;
}