//�� �� ������ ������� �� C++, ����� ������ ���� ��������� ��������� ����� �� ������ ����� � ����� ���� �������� ������ �� ���������� �� � ������� �������.
//��������� �� �� ������� ����� �������.
//�� �� ������ ��������, ����� ������� ���������� ������� ����� ��� ������ �� ������ �����(� ���� �����, � ��� ����� � ���� ������ �� ���) � ������� �� ������ ����������� �� ����� �� ���.


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