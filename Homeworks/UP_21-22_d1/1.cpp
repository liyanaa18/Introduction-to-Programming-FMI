/**
*
* Solution to homework assignment 1
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

int main()
{
    int num = 0;
    cin >> num;

    if (num < 1 || num > 9)
    {
        cout << "-1" << endl;
    }
    else {
        for (int i = 1; i <= num; i++)
        {
            for (int j = num - i + 1; j <= num; j++)
            {
                cout << " ";
            }

            for (int h = i; h <= num; h++)
            {
                cout << h;
            }
            cout << endl;
        }


        for (int i = num - 1; i > 0; i--)
        {

            for (int k = 1; k <= num; k++)
            {
                cout << " ";
            }
            for (int j = num; j >= i; j--)
            {
                cout << j;
            }


            cout << endl;
        }
    }
    return 0;
}