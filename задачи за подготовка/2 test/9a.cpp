//Да се напише програма, която извежда true ако сборът на цифрите на дадено цяло число 
//е равен на числото, образувано от първите му 2 цифри (считано отляво надясно) и 
//false, ако числото не изпълнява това условие.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int rem;
    int sum = 0;

    int n = num;

    double multiplilerBy10 = 0.01;

    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
        multiplilerBy10 *= 10;
    }

    int theFirstTwoDigits = n / multiplilerBy10;

    if (sum - theFirstTwoDigits == 0)
    {
        cout << "true";
    }
    else 
    {
        cout << "false";
    }

    return 0;
}