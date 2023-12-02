#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int reverseNum = 0;

    while (num != 0)
    {
        int rem = num % 10;
        reverseNum = reverseNum * 10 + rem;
        num /= 10; 
    }

    cout << reverseNum;

    return 0;
}