#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    const int size = 50;
    int arr[size];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    double max = arr[0];
    int serialNum = 1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            serialNum = i + 1;
        }
    }
    cout << max << " " << serialNum << endl;
    
    return 0;
}