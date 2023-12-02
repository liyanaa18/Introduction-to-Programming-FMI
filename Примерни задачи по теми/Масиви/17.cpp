#include <iostream>
using namespace std;
int main() {
	int N, counter=0;
	cin >> N;
	int n = N;
	do {
		n /= 10;
		counter++;
	} while (n > 0);

	bool areEqual = true;
	const int size = 12;
	int arr1[size], arr2[size], temp = 0;
	for (int i = 0; i < counter; ++i) {
		 temp=N % 10;
		N /= 10;
		arr1[i] = temp;
		
	}
	for (int j = 0; j < counter ; ++j) {
		arr2[j] = arr1[j];
	}

	for (int j = 0; j < counter / 2; ++j) {
		swap(arr2[j] , arr2[counter - 1 - j]);
	}
	for (int k = 0; k < counter; ++k) {
		if (arr1[k] != arr2[k]) {
			areEqual = false;
		}
	}

	if (areEqual) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}