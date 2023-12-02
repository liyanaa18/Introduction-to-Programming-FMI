#include <iostream>
using namespace std;
int ascii(const char symbol)
{
    return (int) symbol;
}
int main() {
	char symb;
    cin >> symb;
    cout << ascii(symb) << endl;

	return 0;
}