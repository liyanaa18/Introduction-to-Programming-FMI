#include <iostream>
using namespace std;

int abs(const int num)
{
    if (num > 0)
    {
        return num;
    }
    else 
    {
        return -num;
    }
}
int main()
{
    int num;
    cin >> num;
    cout << abs(num) << endl;

    return 0;
}