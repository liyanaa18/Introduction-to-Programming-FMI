#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double temp = 0;
    double sum = 0;

    double arr1[50];
    double arr2[50];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i] >> arr2[i];
        temp = arr1[i] * arr2[i];
        sum += temp;
        temp = 0;
    }
    cout << sum <<  endl;

    return 0;
}