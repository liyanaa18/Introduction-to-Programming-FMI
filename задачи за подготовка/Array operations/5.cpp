#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[50];

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "yes";
    }
    else 
    {
        cout << "no";
    }

    return 0;
}