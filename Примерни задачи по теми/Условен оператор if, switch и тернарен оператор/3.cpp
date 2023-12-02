#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;
    cin >> first >> second;

    int sum = first + second;
    int diff = first - second;
    int multi = first * second;
    int quio = first / second;

    if (sum > diff && sum > multi && sum > quio)
    {
        cout << sum << "\0";
    }
    else if (diff > sum && diff > multi && diff > quio)
    {
        cout << diff << "\0";
    }
    else if (multi > sum && multi > quio && multi > diff)
    {
        cout << multi << "\0";
    }
    else 
    {
        cout << quio << "\0";
    }
    
    return 0;
}