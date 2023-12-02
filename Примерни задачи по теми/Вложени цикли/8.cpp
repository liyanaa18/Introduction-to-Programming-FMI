#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPossible = true;

    for (int i = 0; i <= n/3; i++)
    {
        for (int j = 0; j <= n/4; j++)
        {
            if (i * 3 + j * 4 == n)
            {
                cout << i << "x3" << " " << j << "x4" << endl;
                isPossible = true;
            }
            
        }
    }

    if (!isPossible)
    {
        cout << "NO" << endl;
    }

    return 0;
}