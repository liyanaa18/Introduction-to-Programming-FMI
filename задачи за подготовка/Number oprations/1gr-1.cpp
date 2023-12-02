#include <iostream>
using namespace std;

void reverseDigits(int num)
{
    int newNum = num;

    if (newNum == 0)
    {
        cout << "0";
    }
    if (num < 0)
    {
        newNum *= -1;
        cout << "-";
    }
    while (newNum > 0)
    {
        int rem = newNum % 10;
        cout << rem;
        newNum /= 10;
    }
    
}

int main()
{
    int num; 
    cin >> num;

    reverseDigits(num);
    return 0;
}