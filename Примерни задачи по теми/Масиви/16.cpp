#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    int c = a;

    int arr[20];
    int temp, count = 0;

    do
    {
        c /= 2;
        count++;

    } while (c > 0);

    for (int i = 0; i < count; ++i)
    {
        if (a % 2 == 0)
        {
            temp = 0;
        }
        else 
        {
            temp = 1;
        }
        arr[i] = temp;
        a /= 2;
    }

    for (int i = 0; i < count/2; ++i) {
		swap(arr[i], arr[count - 1 - i]);
	}
	for (int i = 0; i < count; ++i) {
		cout << arr[i];
	}
    
	return 0;
}