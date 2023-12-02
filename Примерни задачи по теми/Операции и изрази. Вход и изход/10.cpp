//Напишете програма, 
//която въвежда две неотрицателни числа и изписва по-голямото от тях.

#include <iostream>
using namespace std;

int main()
{
    int first;
    int second;
    cin >> first >> second;

    if (first > second)
    {
        cout << first << endl;
    }
    else
    {
        cout << second << endl;
    }

    return 0;
}