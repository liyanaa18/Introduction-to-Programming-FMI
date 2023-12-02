#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    

    return 0;
}