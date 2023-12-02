//Да се напише функция на C++, която приема като параметър едномерен масив от цели числа и връща като резултат сумата на четните числа в него.
//Да се напише програма, която извиква написаната функция върху три масива от цели числа
//(с едно число, с три числа и един избран от вас) и извежда на екрана резултатите за всеки от тях.


#include <iostream>
using namespace std;

int evenArray (int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}
int main()
{
    int arr1[100];
    int arr2[100];
    int arr3[100];

    cout << evenArray(arr1, 1);

    cout << evenArray(arr2, 3);

    int k;
    cin >> k;
    cout << evenArray(arr3,k);

    return 0;
}