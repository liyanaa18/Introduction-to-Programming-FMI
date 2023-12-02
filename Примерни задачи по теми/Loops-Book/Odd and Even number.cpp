#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter your num:";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The num is even" << endl;
    }
    else
    {
        cout << "The num is odd" << endl;
    }

    return 0;
}