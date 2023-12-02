#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int smallestDigit = 9;

    while (num != 0)
    {
        int rem = num % 10;

        if (smallestDigit > rem)
        {
            smallestDigit = rem;
        }
        num /= 10;
    }

    cout << smallestDigit << endl;
    
    return 0;
}