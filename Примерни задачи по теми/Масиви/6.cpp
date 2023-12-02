#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int arr1[100];
    int arr2[100];

    for (int i = 0; i < k; ++i)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < k; ++j)
    {
        cin >> arr2[j];
    }

    int count = 0;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}