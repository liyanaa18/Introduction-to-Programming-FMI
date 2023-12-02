//Напишете програма, която въвежда три естествени числа a, b и c 
//и като резултат връща корените на квадратното уравнение a2x + bx + c = 0 
//(приемете, че винаги ще има реални корени).

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    int x1;
    int x2;

    x1 = (-b + (sqrt(b * b - 4 * a * c))) / 2 * a;
    cout << "x1 = " << x1 << endl;

    x2 = (-b - (sqrt(b * b - 4 * a * c))) / 2 * a;
    cout << "x2 = " << x2 << endl;

    return 0;
}