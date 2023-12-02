#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[50];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; ++i)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    
    return 0;
}