#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cin >> num;
    unsigned long long fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact << endl;

    return 0;
}