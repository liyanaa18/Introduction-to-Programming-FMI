#include <iostream>
using namespace std;

void reverse(int num)
{
    if (num == 0)
    {
        cout << "0";
    }
    if (num < 0)
    {
        num *= -1;
        cout << "-";
    }
    while (num > 0)
    {
        cout << num % 10;
        num /= 10;
    }  

}
int main()
{
    int num;
    cin >> num;

    reverse(num);

    return 0;
}