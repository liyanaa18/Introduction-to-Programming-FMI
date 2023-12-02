#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double distance = 0;
    double x, y, a, b;

    cout << "Coordinates of first point: ";
    cin >> x >> y;

    cout << "Coordinates of second point: ";
    cin >> a >> b;

    distance = sqrt(pow(y - x, 2) + pow(b - a, 2) * 1.0);

    cout << distance;

    return 0;
}