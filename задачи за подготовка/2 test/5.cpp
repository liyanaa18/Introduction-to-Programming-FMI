#include <iostream>

using namespace std;

int main() {
    int number, lastDigit;
	int arr[100];
	cin >> number;
	int j = 0;
	int counter = 0;

	if (number >= 0 && number <= 9)
	{
		cout << 0;
		return 0;
	}

	while (number!=0) {
		lastDigit = number % 10;
		arr[j] = lastDigit;
		number /= 10;
		j++;
		counter++;
	}
	for (int j = 0; j < counter - 1; ++j)
    {
        for (int k = 0; k < counter - 1 - j; ++k)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }

    for (int j = 0; j < counter - 1; ++j)
    {
        for (int k = 0; k < counter - 1 - j; ++k)
        {
            if (arr[k] == arr[k + 1])
            {
                cout << 1;
				return 0;
            }
        }
		cout << 0;
		break;
    }


	
	return 0;
}