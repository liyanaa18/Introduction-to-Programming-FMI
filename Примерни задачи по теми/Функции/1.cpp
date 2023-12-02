#include <iostream>
using namespace std;

int sum(const int a, const int b)
{
    int temp = a + b;
    return temp;
}
int main()
{
    int num1;
    int num2;
    cin >> num1 >> num2;
    cout << sum(num1, num2) << endl;

    return 0;
}