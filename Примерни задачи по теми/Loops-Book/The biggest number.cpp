#include <iostream>
using namespace std;

int main()
{
    int first, second, third, max;
    cin >> first >> second >> third;

    if (first >= second && first >= third)
    {
        max = first;
    }
    if (second >= first && second >= third)
    {
        max = second;
    }
    if (third >= second && third >= first)
    {
        max = third;
    }
    
    cout << "Max:" << max << endl;

    return 0;
}