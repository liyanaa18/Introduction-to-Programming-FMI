#include <iostream>

using namespace std;

int main()
{

    int num = 0;
    cin >> num;

    int rev = 0;
    int digit = 0;
    

    if (num < 0)
    {
        cout << "-1" << "\0";
        return 0;
    }

    while (num != 0)
    {
        int remainder = num % 10;        // get the last digit of num
        rev = rev * 10 + remainder;  // reverse the number
        num = num / 10;        // remove the last digit from num
    }

    int newNum = 0;

    while (rev != 0)
    {   
        digit = rev % 10;

        rev = rev / 10;

        if (digit % 2 == 0)
        {
            newNum = newNum * 10 + digit;
        }
    }
    cout << newNum << "\0";

    return 0;
    
}