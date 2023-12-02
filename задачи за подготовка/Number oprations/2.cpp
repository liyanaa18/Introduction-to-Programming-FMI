#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int biggestDigit = 0;

    while (num != 0)
    {
        int rem = num % 10;

        if (rem > biggestDigit)
        {
            biggestDigit = rem;
        }
        num/= 10;
    }

    cout << biggestDigit << endl;

    return 0;
}