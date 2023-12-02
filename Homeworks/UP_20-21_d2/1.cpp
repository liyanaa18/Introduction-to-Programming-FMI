/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Liyana Asenova
* @idnumber 62570
* @task 1
* @compiler VC
*
*/

#include <iostream>
using namespace std;

bool hasAlternatingBits(unsigned n)
{
    return (n & (n >> 1)) == 0 && (n & (n >> 2)) == (n >> 2);
}

//This is the second solution

/*bool hasAlternatingBits(unsigned n)
{
    int rem = n % 2;
    n /= 2;

    while (n > 0)
    {

        if (rem == n % 2)
        {
            return false;
        }
        rem = n % 2;
        n /= 2;
    }
    return true;
} */

int main()
{
    int num;
    cin >> num;

    if (num < 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    hasAlternatingBits(num) ? cout << "true" : cout << "false";

    return 0;
}