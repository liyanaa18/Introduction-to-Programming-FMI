//Да се напише програма, която извежда true ако сборът на цифрите на дадено цяло число е равен на числото, 
//образувано от последните му 2 цифри 
//(считано отляво надясно) и false, 
//ако числото не изпълнява това условие.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int rem;
    int sum = 0;

    int n = num;

    int multiplayerByTen = 100;

    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    int theLastDigits = n % multiplayerByTen;

    if (sum == theLastDigits)
    {
        cout << "true";
    }
    else 
    {
        cout << "false";
    }
    return 0;
}