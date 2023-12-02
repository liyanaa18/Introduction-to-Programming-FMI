#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int value;

    for (int i = 0; i < n; i++)
    {
        cin >> value;

        cout << value << "\0";
    }

    return 0;
}