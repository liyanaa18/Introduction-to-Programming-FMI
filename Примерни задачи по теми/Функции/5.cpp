#include <iostream>
using namespace std;
double trunc(const double num)
{
    return (int) num;
}
int main() {
	
    double num;
    cin >> num;
    cout << trunc(num) << endl;
	return 0;
}