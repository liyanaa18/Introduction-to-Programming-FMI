#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[50];
    int temp = arr[0];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (arr[i] < temp)
        {
            temp = arr[i];
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl; 

    return 0;
}