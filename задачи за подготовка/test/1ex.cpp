//�� �� ������ �������, ����� ����� ���� �������� ��� - �������� ����� � �������� ���� ��������� ����� �� ���������� �����.
//�� �� ������ ��������, ����� �������� ���������� �������, �� �� ������ �� ��������� ����� �� ���� ����� � �� ������ ��� - �������� �� ���

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