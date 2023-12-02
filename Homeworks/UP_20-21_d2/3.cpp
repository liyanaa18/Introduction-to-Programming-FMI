/**
*  
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Liyana Asenova
* @idnumber 62570
* @task 3
* @compiler VC
*
*/

#include <iostream>
using namespace std;


int minStep (int first, int second)
{
    int count = 0;

    while (second > first) 
    {
        count++;

        if (second & 1)
        {
            second++;
        }
        else
        {
            second /= 2;
        }
    }

    while (second < first)
    {
        count++;

        if (first)
        {
            first--;
        }
        else
        {
            first *= 2;
        }
    }
    int finalResult = count + first - second;

    if (finalResult < 0)
    {
        return 0;
    }
    else if (finalResult > 0)
    {
        return finalResult;
    }
}

int main()
{
    int num = 0;
    int result = 0;

    cin >> num >> result;

    if (num <= 0 && result > 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    if (num < 0 || result < 0)
    {
        cout << "-1" << endl;
        return 0;
    }


    cout << minStep(num, result) << endl;

    return 0;
}

