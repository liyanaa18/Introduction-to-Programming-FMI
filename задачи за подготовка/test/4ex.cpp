//�� �� ������ void ������� �� C++, ����� ������ ���� ��������� ���� ����������� ����� � �� ����������� � �������� ����������� �� ������� ��(���������� ������).
//��������� �� �� ������� ����� �������.
//�� �� ������ ��������, ����� ������� ���������� ������� ����� ��� ���� �����(�����������, ���������� � ������� �� ���) � ������� �� ������ ����������� �� ����� �� ���.


#include <iostream>
using namespace std;

void average(int num)
{
    int sum = 0;
    int count = 0;


    if (num == 0)
    {
        cout << sum;
    }

    else if (num != 0)
    {
        while (num != 0)
        {
            int rem = num % 10;
            sum += rem;
            count++;
            num /= 10;
        }
        int result = sum / count;
        cout << result;
    }
}

int main()
{
    average(0);

    cout << endl;

    average(34);

    int num;
    cin >> num;

    average(num);

    return 0;
}