#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num % 10 == 0)
    {
        cout << "Even integer";
    }
    else
    {
        if (num < 0)
        {
            cout << "Negative rational";
        }
        else
        {
            cout << "Positive rational";
        }
    }

    return 0;
}