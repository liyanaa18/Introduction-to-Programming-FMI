//Да се напише функция, която връща като резултат най - голямото число в предаден като параметър масив от естествени числа.
//Да се напише програма, която използва написаната функция, за да въведе от конзолата масив от цели числа и да изведе най - голямото от тях

#include <iostream>
using namespace std;

int theBiggestNumInArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNum = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }

    return maxNum;
}

int main()
{
    int arr[100];

    int n;
    cin >> n;
    
    cout << theBiggestNumInArray(arr, n);



    return 0;
}