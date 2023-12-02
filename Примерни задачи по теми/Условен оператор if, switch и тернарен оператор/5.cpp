#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int firstNum = num / 100;
    int secondNum = (num % 100) / 10;
    int thirdNum = (num % 100) % 10;

    if (firstNum == secondNum || firstNum == thirdNum)
    {
        cout << "true" << "\0";
    }
    else if (secondNum == firstNum || secondNum == thirdNum)
    {
        cout << "true" << "\0";
    }
    else if (thirdNum == firstNum || thirdNum == secondNum)
    {
        cout << "true" << "\0";
    }
    else 
    {
        cout << "false" << "\0";
    }
    return 0;
}