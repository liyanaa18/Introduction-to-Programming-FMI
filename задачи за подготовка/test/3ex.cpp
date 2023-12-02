//Да се напише функция на C++, която приема като параметър едномерен масив от дробни числа и връща като резултат сумата на елементите му с нечетни индекси.
//Функцията да не извиква други функции.
//Да се напише програма, която извиква написаната функция върху три масива от дробни числа(с едно число, с три числа и един избран от вас) и извежда на екрана резултатите за всеки от тях.


#include <iostream>
using namespace std;

int oddArray (int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
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

    cout << oddArray(arr1, 1);

    cout << oddArray(arr2, 3);

    int k;
    cin >> k;
    cout << oddArray(arr3,k);


    return 0;
}