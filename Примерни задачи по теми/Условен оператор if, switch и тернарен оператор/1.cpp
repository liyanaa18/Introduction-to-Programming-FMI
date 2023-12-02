#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;
   
    cin >> first >> second;

    if (first > second)
    {
        cout << first << "\0";
    }
    else if (second > first)
    {
        cout << second << "\0";
    }
  

    return 0;
}