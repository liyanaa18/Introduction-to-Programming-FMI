#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[50];
    int arr2[50];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (arr1[j] > arr1[j + 1])
            {
                swap(arr1[j], arr1[j + 1]);
            }
        }
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (arr2[j] > arr2[j + 1])
            {
                swap(arr2[j], arr2[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[i])
        {
            cout << "yes";
            break;
        }
        else 
        {
            cout << "no";
            break;
        }

    }
    
    return 0;
}