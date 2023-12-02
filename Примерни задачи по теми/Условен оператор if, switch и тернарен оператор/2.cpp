#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;
    int third;

    cin >> first >> second >> third;

    if (first > second && first > third)
    {
        cout << first << "\0";
    }
    else if (second > first && second > third)
    {
        cout << second << "\0";
    }
    else 
    {
        cout << third << "\0";
    }

    return 0;
}