#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int sum = 0;

    for (int i = 0; i <= num; i++)
    {
        cin >> i;
        sum += i; 
    }
    cout << sum << endl;
    
    return 0;
}