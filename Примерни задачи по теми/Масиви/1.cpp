#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[50];

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double result = sum / n;

    cout << result << endl;

    return 0;
}