

#include <iostream>
#include <climits>
using namespace std;

void mySwap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int second(int arr[], int size)
{
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (size < 2)
    {
        return -1;
    }
   
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                mySwap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = size - 2; i >= 0; i--)
    {
       if (arr[i] != arr[size - 1])
       {
           cout << arr[i];
           break;
       }
      
    }    
}
int main()
{
    int arr[100];
    int size;

    return second(arr, size);

    return 0;
}