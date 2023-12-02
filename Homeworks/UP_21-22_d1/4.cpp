/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Liyana Asenova
* @idnumber 62570
* @task 4
* @compiler VC
*
*/



#include <iostream>
using namespace std;

int main()
{
    double first;
    cin >> first;

    double second;
    cin >> second;

    //we must use the formula whether the point belongs to a given circle

    if (first == 4.0 || second == 4.0)
    {
        cout << "Undefined" << endl;
    }
    if (first == 0.0 && second == 0.0)
    {
        cout << "Undefined" << endl;
    }
    if (first == -4.0 || second == -4.0)
    {
        cout << "Undefined" << endl;
    }
    else 
    {
        cout << "Outside" << endl;
    }

    return 0;
}