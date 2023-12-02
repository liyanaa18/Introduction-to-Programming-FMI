#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, determinant, root1, root2;
    cin >> a >> b >> c;

    determinant = b * b - 4 * a * c;

    if (determinant == 0)
    {
        root1 = root2 = -b / 2 * a;

        cout << "Root1 = Root2 =" << root1 << endl;
    }
    else if (determinant != 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);

        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;

    }
    else if (determinant < 0)
    {
        cout << "There are no real roots" << endl;
    }


    return 0;
}