#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int givenDigit;
    cin >> givenDigit;

    int count = 0;

    while (num != 0)
    {
        int rem = num % 10;

        if (givenDigit == rem)
        {
            count++;
        }
        num /= 10;
    }

    cout << count << endl;
    
    return 0;
}