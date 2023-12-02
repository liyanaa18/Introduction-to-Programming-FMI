#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[1024];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n * k; ++i)
    {
        cout << arr[i % n] << " ";
    }
    
    return 0;
}