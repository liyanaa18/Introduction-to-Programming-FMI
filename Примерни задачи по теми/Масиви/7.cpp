#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int count = 0;

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            ++count;
        }
    }
    cout << count << endl;
    
    return 0;
}