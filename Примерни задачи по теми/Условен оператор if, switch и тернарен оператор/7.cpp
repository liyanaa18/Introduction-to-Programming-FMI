#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;
    int third;
    cin >> first >> second >> third;

    if (first + second < third || second + third < first || first + third < second)
    {
        cout << "true" << "\0";
    }
    else 
    {
        cout << "false" << "\0";
    }
    return 0;
}